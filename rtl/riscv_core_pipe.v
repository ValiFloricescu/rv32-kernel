`timescale 1ns / 1ps
`include "riscv_defs.vh"

module riscv_core_pipe #(
    parameter [31:0] RESET_PC = `RESET_PC   // vector de reset; implicit din riscv_defs.vh
) (
    input  wire        clk,
    input  wire        rst_n,
    output wire [31:0] imem_addr,
    input  wire [31:0] imem_rdata,
    output wire [31:0] dmem_addr,
    output wire [31:0] dmem_wdata,
    output wire [3:0]  dmem_wstrb,
    output wire        dmem_we,
    input  wire [31:0] dmem_rdata
);

    // ============================================================
    //  DECLARATII (regiStri de stare)
    // ============================================================
    reg  [31:0] pc;
    reg  [31:0] ifid_pc, ifid_pc4, ifid_instr;
    // ID/EX
    reg                  idex_reg_write, idex_alu_a_src, idex_alu_b_src;
    reg [`ALU_OP_W-1:0]  idex_alu_op;
    reg                  idex_mem_read, idex_mem_write;
    reg [`WB_SEL_W-1:0]  idex_wb_sel;
    reg                  idex_branch, idex_jump, idex_jalr, idex_is_muldiv;
    reg                  idex_is_csr, idex_sys_ecall, idex_sys_ebreak, idex_sys_mret, idex_sys_sret, idex_illegal;
    reg                  idex_is_amo, idex_is_lr, idex_is_sc;
    reg [4:0]            idex_amo_op;
    reg [11:0]           idex_csr_addr;
    reg [31:0]           idex_rs1_data, idex_rs2_data, idex_imm, idex_pc, idex_pc4;
    reg [4:0]            idex_rd, idex_rs1, idex_rs2;
    reg [2:0]            idex_funct3;
    // EX/MEM
    reg                  exmem_reg_write, exmem_mem_read, exmem_mem_write;
    reg [`WB_SEL_W-1:0]  exmem_wb_sel;
    reg [31:0]           exmem_alu_result, exmem_rs2_data, exmem_pc4;
    reg [4:0]            exmem_rd;
    reg [2:0]            exmem_funct3;
    reg                  exmem_is_amo, exmem_is_lr, exmem_is_sc;
    reg [4:0]            exmem_amo_op;
    // MEM/WB
    reg [`WB_SEL_W-1:0]  memwb_wb_sel;
    reg [31:0]           memwb_alu_result, memwb_load_data, memwb_pc4;
    reg                  memwb_reg_write_r;
    reg [4:0]            memwb_rd_r;

    // --- interfata de retragere (RVFI-lite, doar pentru verificare/co-simulare) ---
    // valid = slotul contine o instructiune reala retrasa (nu bula/squash);
    // instr = cuvantul instructiunii retrase. Nu influenteaza logica functionala.
    reg                  ifid_valid;
    reg                  idex_valid;
    reg                  ifid_fault, idex_fault;
    reg [31:0]           idex_instr;
    reg                  exmem_valid;
    reg [31:0]           exmem_instr;
    reg                  memwb_valid;
    reg [31:0]           memwb_instr;

    // semnale partajate
    wire [31:0] wb_data;
    wire        memwb_reg_write;
    wire [4:0]  memwb_rd;
    wire        load_use_stall;
    wire        ex_redirect;
    wire [31:0] ex_redirect_pc;
    wire [31:0] mul_result;
    wire        mul_busy, mul_done;

    // stall de muldiv: tine instructiunea M in EX pana cand unitatea termina
    wire mul_stall   = idex_is_muldiv & ~mul_done;
    // orice stall ingheata PC + IF/ID
    wire if_xlate_pending = mmu_active & (fstate != F_RDY);
    wire stall_front = load_use_stall | mul_stall | mmu_stall | if_xlate_pending;

    // ============================================================
    //  ETAPA IF
    // ============================================================
    wire [31:0] pc_plus4 = pc + 32'd4;
    wire [31:0] next_pc  = ex_redirect ? ex_redirect_pc : pc_plus4;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)            pc <= RESET_PC;
        else if (ex_redirect)  pc <= ex_redirect_pc;
        else if (!stall_front) pc <= next_pc;
    end

    assign imem_addr = (mmu_active & fstate == F_RDY) ? fpaddr : pc;
    wire [31:0] if_instr = imem_rdata;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ifid_pc <= 32'b0; ifid_pc4 <= 32'b0; ifid_instr <= `RV_NOP;
            ifid_valid <= 1'b0; ifid_fault <= 1'b0;
        end else if (back_pressure) begin
            // stall din spate (load-use / muldiv / walk de date): ingheata IF/ID
        end else if (ex_redirect) begin
            ifid_pc <= 32'b0; ifid_pc4 <= 32'b0; ifid_instr <= `RV_NOP;  // squash
            ifid_valid <= 1'b0; ifid_fault <= 1'b0;
        end else if (if_xlate_pending) begin
            // traducere fetch in curs: bula (instructiunea precedenta a fost deja consumata)
            ifid_pc <= 32'b0; ifid_pc4 <= 32'b0; ifid_instr <= `RV_NOP;
            ifid_valid <= 1'b0; ifid_fault <= 1'b0;
        end else begin
            ifid_pc <= pc; ifid_pc4 <= pc_plus4;
            ifid_instr <= (mmu_active & ffault) ? `RV_NOP : if_instr;
            ifid_valid <= 1'b1; ifid_fault <= mmu_active & ffault;
        end
    end

    // ============================================================
    //  ETAPA ID
    // ============================================================
    wire [6:0] id_opcode   = `OPCODE(ifid_instr);
    wire [4:0] id_rd       = `RD(ifid_instr);
    wire [4:0] id_rs1      = `RS1(ifid_instr);
    wire [4:0] id_rs2      = `RS2(ifid_instr);
    wire [2:0] id_funct3   = `FUNCT3(ifid_instr);
    wire       id_funct7b5 = ifid_instr[30];
    wire       id_funct7b0 = ifid_instr[25];

    wire                  id_reg_write, id_alu_a_src, id_alu_b_src;
    wire [`ALU_OP_W-1:0]  id_alu_op;
    wire [`IMM_SEL_W-1:0] id_imm_sel;
    wire                  id_mem_read, id_mem_write;
    wire [`WB_SEL_W-1:0]  id_wb_sel;
    wire                  id_branch, id_jump, id_jalr, id_is_muldiv;
    wire                  id_is_csr, id_sys_ecall, id_sys_ebreak, id_sys_mret, id_sys_sret, id_illegal;
    wire                  id_is_amo, id_is_lr, id_is_sc;
    wire [4:0]            id_amo_op;

    control u_ctrl (
        .opcode(id_opcode), .funct3(id_funct3),
        .funct7b5(id_funct7b5), .funct7b0(id_funct7b0),
        .funct12(ifid_instr[31:20]), .funct5(ifid_instr[31:27]),
        .reg_write(id_reg_write), .alu_a_src(id_alu_a_src), .alu_b_src(id_alu_b_src),
        .alu_op(id_alu_op), .imm_sel(id_imm_sel),
        .mem_read(id_mem_read), .mem_write(id_mem_write), .wb_sel(id_wb_sel),
        .branch(id_branch), .jump(id_jump), .jalr(id_jalr), .is_muldiv(id_is_muldiv),
        .is_csr(id_is_csr), .sys_ecall(id_sys_ecall),
        .sys_ebreak(id_sys_ebreak), .sys_mret(id_sys_mret), .sys_sret(id_sys_sret),
        .illegal(id_illegal),
        .is_amo(id_is_amo), .is_lr(id_is_lr), .is_sc(id_is_sc), .amo_op(id_amo_op)
    );

    wire [31:0] id_rs1_data, id_rs2_data;
    regfile u_rf (
        .clk(clk),
        .we(memwb_reg_write), .rd_addr(memwb_rd), .rd_data(wb_data),
        .rs1_addr(id_rs1), .rs2_addr(id_rs2),
        .rs1_data(id_rs1_data), .rs2_data(id_rs2_data)
    );

    wire [31:0] id_imm;
    imm_gen u_imm (.instr(ifid_instr), .imm_sel(id_imm_sel), .imm(id_imm));

    // forward WB->ID (register file "write-first")
    wire wb2id_rs1 = memwb_reg_write && (memwb_rd != 5'd0) && (memwb_rd == id_rs1);
    wire wb2id_rs2 = memwb_reg_write && (memwb_rd != 5'd0) && (memwb_rd == id_rs2);
    wire [31:0] id_rs1_fwd = wb2id_rs1 ? wb_data : id_rs1_data;
    wire [31:0] id_rs2_fwd = wb2id_rs2 ? wb_data : id_rs2_data;

    hazard u_hazard (
        .idex_mem_read(idex_mem_read), .idex_rd(idex_rd),
        .ifid_rs1(id_rs1), .ifid_rs2(id_rs2), .stall(load_use_stall)
    );

    // registru ID/EX
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            idex_reg_write <= 1'b0; idex_mem_read <= 1'b0; idex_mem_write <= 1'b0;
            idex_branch <= 1'b0; idex_jump <= 1'b0; idex_jalr <= 1'b0; idex_is_muldiv <= 1'b0;
            idex_alu_a_src <= 1'b0; idex_alu_b_src <= 1'b0;
            idex_alu_op <= `ALU_ADD; idex_wb_sel <= `WB_ALU;
            idex_rs1_data <= 32'b0; idex_rs2_data <= 32'b0; idex_imm <= 32'b0;
            idex_pc <= 32'b0; idex_pc4 <= 32'b0;
            idex_rd <= 5'b0; idex_rs1 <= 5'b0; idex_rs2 <= 5'b0; idex_funct3 <= 3'b0;
            idex_is_csr <= 1'b0; idex_sys_ecall <= 1'b0; idex_sys_ebreak <= 1'b0; idex_sys_mret <= 1'b0; idex_sys_sret <= 1'b0; idex_illegal <= 1'b0; idex_csr_addr <= 12'b0;
            idex_is_amo <= 1'b0; idex_is_lr <= 1'b0; idex_is_sc <= 1'b0; idex_amo_op <= 5'b0;
            idex_valid <= 1'b0; idex_instr <= `RV_NOP;
        end else if (mul_stall || mmu_stall) begin
            // TINE instructiunea in EX (muldiv sau walk MMU in curs)
        end else if (load_use_stall || ex_redirect) begin
            // bula: dezactiveaza efectele
            idex_reg_write <= 1'b0; idex_mem_read <= 1'b0; idex_mem_write <= 1'b0;
            idex_branch <= 1'b0; idex_jump <= 1'b0; idex_jalr <= 1'b0; idex_is_muldiv <= 1'b0;
            idex_alu_a_src <= 1'b0; idex_alu_b_src <= 1'b0;
            idex_alu_op <= `ALU_ADD; idex_wb_sel <= `WB_ALU;
            idex_rs1_data <= 32'b0; idex_rs2_data <= 32'b0; idex_imm <= 32'b0;
            idex_pc <= 32'b0; idex_pc4 <= 32'b0;
            idex_rd <= 5'b0; idex_rs1 <= 5'b0; idex_rs2 <= 5'b0; idex_funct3 <= 3'b0;
            idex_is_csr <= 1'b0; idex_sys_ecall <= 1'b0; idex_sys_ebreak <= 1'b0; idex_sys_mret <= 1'b0; idex_sys_sret <= 1'b0; idex_illegal <= 1'b0; idex_csr_addr <= 12'b0;
            idex_is_amo <= 1'b0; idex_is_lr <= 1'b0; idex_is_sc <= 1'b0; idex_amo_op <= 5'b0;
            idex_valid <= 1'b0; idex_instr <= `RV_NOP; idex_fault <= 1'b0;
        end else begin
            idex_reg_write <= id_reg_write; idex_mem_read <= id_mem_read;
            idex_mem_write <= id_mem_write; idex_branch <= id_branch;
            idex_jump <= id_jump; idex_jalr <= id_jalr; idex_is_muldiv <= id_is_muldiv;
            idex_alu_a_src <= id_alu_a_src; idex_alu_b_src <= id_alu_b_src;
            idex_alu_op <= id_alu_op; idex_wb_sel <= id_wb_sel;
            idex_rs1_data <= id_rs1_fwd; idex_rs2_data <= id_rs2_fwd;
            idex_imm <= id_imm; idex_pc <= ifid_pc; idex_pc4 <= ifid_pc4;
            idex_rd <= id_rd; idex_rs1 <= id_rs1; idex_rs2 <= id_rs2;
            idex_funct3 <= id_funct3;
            idex_is_csr <= id_is_csr; idex_sys_ecall <= id_sys_ecall; idex_sys_ebreak <= id_sys_ebreak; idex_sys_mret <= id_sys_mret; idex_sys_sret <= id_sys_sret; idex_illegal <= id_illegal; idex_csr_addr <= ifid_instr[31:20];
            idex_is_amo <= id_is_amo; idex_is_lr <= id_is_lr; idex_is_sc <= id_is_sc; idex_amo_op <= id_amo_op;
            idex_valid <= ifid_valid; idex_instr <= ifid_instr; idex_fault <= ifid_fault;
        end
    end

    // ============================================================
    //  ETAPA EX
    // ============================================================
    wire [1:0] forward_a, forward_b;
    forwarding u_fwd (
        .idex_rs1(idex_rs1), .idex_rs2(idex_rs2),
        .exmem_rd(exmem_rd), .exmem_reg_write(exmem_reg_write),
        .memwb_rd(memwb_rd), .memwb_reg_write(memwb_reg_write),
        .forward_a(forward_a), .forward_b(forward_b)
    );

    wire [31:0] exmem_fwd_val = (exmem_wb_sel == `WB_PC4) ? exmem_pc4
                                                          : exmem_alu_result;

    reg [31:0] ex_rs1_fwd, ex_rs2_fwd;
    always @(*) begin
        case (forward_a)
            `FWD_EXMEM: ex_rs1_fwd = exmem_fwd_val;
            `FWD_MEMWB: ex_rs1_fwd = wb_data;
            default:    ex_rs1_fwd = idex_rs1_data;
        endcase
        case (forward_b)
            `FWD_EXMEM: ex_rs2_fwd = exmem_fwd_val;
            `FWD_MEMWB: ex_rs2_fwd = wb_data;
            default:    ex_rs2_fwd = idex_rs2_data;
        endcase
    end

    wire [31:0] ex_alu_a = idex_alu_a_src ? idex_pc  : ex_rs1_fwd;
    wire [31:0] ex_alu_b = idex_alu_b_src ? idex_imm : ex_rs2_fwd;
    wire [31:0] ex_alu_result;
    wire        ex_alu_zero;

    alu u_alu (.a(ex_alu_a), .b(ex_alu_b), .alu_op(idex_alu_op),
               .result(ex_alu_result), .zero(ex_alu_zero));

    // unitatea de inmultire/impartire (extensia M)
    muldiv u_muldiv (
        .clk(clk), .rst_n(rst_n),
        .start(idex_is_muldiv), .op(idex_funct3),
        .a(ex_rs1_fwd), .b(ex_rs2_fwd),
        .result(mul_result), .busy(mul_busy), .done(mul_done)
    );

    // ============================================================
    //  CSR (Zicsr) + trap, rezolvate in EX
    // ============================================================
    reg ex_branch_cond;
    always @(*) begin
        case (idex_funct3)
            `F3_BEQ : ex_branch_cond = (ex_rs1_fwd == ex_rs2_fwd);
            `F3_BNE : ex_branch_cond = (ex_rs1_fwd != ex_rs2_fwd);
            `F3_BLT : ex_branch_cond = ($signed(ex_rs1_fwd) <  $signed(ex_rs2_fwd));
            `F3_BGE : ex_branch_cond = ($signed(ex_rs1_fwd) >= $signed(ex_rs2_fwd));
            `F3_BLTU: ex_branch_cond = (ex_rs1_fwd <  ex_rs2_fwd);
            `F3_BGEU: ex_branch_cond = (ex_rs1_fwd >= ex_rs2_fwd);
            default : ex_branch_cond = 1'b0;
        endcase
    end

    wire        ex_branch_taken = idex_branch & ex_branch_cond;
    wire [31:0] ex_pc_target    = idex_pc + idex_imm;
    wire [31:0] ex_jalr_target  = (ex_rs1_fwd + idex_imm) & ~32'b1;
    wire        ex_take_pc       = ex_branch_taken | idex_jump;
    wire [31:0] ex_target        = (idex_jump && idex_jalr) ? ex_jalr_target : ex_pc_target;

    wire [31:0] csr_rdata, csr_trap_vec, csr_ret_pc;
    wire        csr_addr_valid;
    wire [1:0]  csr_priv;

    wire [31:0] csr_src   = idex_funct3[2] ? {27'b0, idex_rs1} : ex_rs1_fwd;
    wire [1:0]  csr_op    = idex_funct3[1:0];           // 01=RW 10=RS 11=RC
    wire [31:0] csr_wval  = (csr_op == 2'b01) ? csr_src
                          : (csr_op == 2'b10) ? (csr_rdata |  csr_src)
                          :                     (csr_rdata & ~csr_src);
    wire        csr_wr    = idex_is_csr & ((csr_op == 2'b01) | (idex_rs1 != 5'b0));

    wire        csr_illegal  = idex_is_csr & ~csr_addr_valid;
    wire        mret_ok      = idex_sys_mret & (csr_priv == `PRIV_M);
    wire        sret_ok      = idex_sys_sret & (csr_priv != `PRIV_U);
    wire        xret_illegal = (idex_sys_mret & ~mret_ok) | (idex_sys_sret & ~sret_ok);

    // nealiniere: instructiune (tinta salt), respectiv date (load/store/AMO)
    wire        instr_misalign = ex_take_pc & (ex_target[1:0] != 2'b00);
    wire [31:0] mem_addr_ex     = ex_alu_result;
    wire        sz_misalign = (idex_funct3[1:0] == 2'b01) ? mem_addr_ex[0]
                            : (idex_funct3[1:0] == 2'b10) ? (mem_addr_ex[1:0] != 2'b00)
                            :                               1'b0;
    wire        mem_access  = idex_mem_read | idex_mem_write | idex_is_amo | idex_is_lr | idex_is_sc;
    wire        is_store_acc = idex_mem_write | idex_is_amo | idex_is_sc;
    wire        load_misalign  = mem_access & sz_misalign & ~is_store_acc;
    wire        store_misalign = mem_access & sz_misalign &  is_store_acc;

    wire        irq_pending;
    wire [31:0] irq_cause, csr_satp;

    wire        mmu_active = csr_satp[31] & (csr_priv != `PRIV_M);
    wire        ex_mem_op  = idex_mem_read | idex_mem_write | idex_is_amo | idex_is_lr | idex_is_sc;
    wire [1:0]  mmu_acc    = is_store_acc ? 2'd2 : 2'd1;
    wire        need_xlate = mmu_active & ex_mem_op & idex_valid & ~(load_misalign | store_misalign);

    localparam X_IDLE = 2'd0, X_WALK = 2'd1, X_RDY = 2'd2;
    localparam F_IDLE = 2'd0, F_WALK = 2'd1, F_RDY = 2'd2;
    reg  [1:0]  xstate, fstate;
    reg  [31:0] xpaddr, fpaddr;
    reg         xfault, ffault;
    reg  [3:0]  xcause;
    wire        mmu_done, mmu_fault, mmu_mem_req;
    wire [31:0] mmu_paddr, mmu_mem_addr;
    wire [3:0]  mmu_fault_cause;

    // arbitraj non-preemptiv: un walk pornit se termina; la egalitate EX are prioritate
    wire        if_need_xlate = mmu_active;
    wire        w_busy   = (xstate == X_WALK) | (fstate == F_WALK);
    wire        ex_wants = need_xlate    & (xstate == X_IDLE);
    wire        if_wants = if_need_xlate & (fstate == F_IDLE);
    wire        ex_start = ex_wants & ~w_busy;
    wire        if_start = if_wants & ~w_busy & ~ex_wants;
    wire        serving_ex = (xstate == X_WALK) | ex_start;

    wire        mem_data_acc = (exmem_mem_read | exmem_mem_write | exmem_is_amo
                                | exmem_is_lr | exmem_is_sc) & exmem_valid;
    wire        walker_bus = mmu_walking & ~mem_data_acc;

    mmu u_mmu (
        .clk(clk), .rst_n(rst_n),
        .req(ex_start | if_start),
        .vaddr(serving_ex ? ex_alu_result : pc),
        .access(serving_ex ? mmu_acc : 2'd0),
        .satp(csr_satp), .priv(csr_priv), .sum(1'b0), .mxr(1'b0),
        .done(mmu_done), .paddr(mmu_paddr), .fault(mmu_fault), .fault_cause(mmu_fault_cause),
        .mem_req(mmu_mem_req), .mem_addr(mmu_mem_addr),
        .mem_rdata(dmem_rdata), .mem_ack(mmu_mem_req & walker_bus)
    );

    wire        back_pressure = load_use_stall | mul_stall | mmu_stall;
    wire        fetch_consumed = mmu_active ? ((fstate == F_RDY) & ~back_pressure) : ~back_pressure;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) xstate <= X_IDLE;
        else case (xstate)
            X_IDLE: if (ex_start) xstate <= X_WALK;
            X_WALK: if (mmu_done) begin
                xpaddr <= mmu_paddr; xfault <= mmu_fault; xcause <= mmu_fault_cause;
                xstate <= X_RDY;
            end
            X_RDY:  xstate <= X_IDLE;
            default: xstate <= X_IDLE;
        endcase
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin fstate <= F_IDLE; ffault <= 1'b0; fpaddr <= 32'b0; end
        else case (fstate)
            F_IDLE: if (if_start) fstate <= F_WALK;
            F_WALK: if (mmu_done & ~serving_ex) begin
                fpaddr <= mmu_paddr; ffault <= mmu_fault;
                fstate <= F_RDY;
            end
            F_RDY:  if (ex_redirect | fetch_consumed) fstate <= F_IDLE;
            default: fstate <= F_IDLE;
        endcase
    end

    wire        mmu_stall    = need_xlate & (xstate != X_RDY);
    wire        mmu_walking  = w_busy;
    wire        ex_dfault    = need_xlate & (xstate == X_RDY) & xfault;
    wire        ex_ifault    = idex_fault & idex_valid & ~mul_stall & ~mmu_stall;
    wire        ex_pagefault = ex_dfault | ex_ifault;

    wire        ex_trap_sync = (instr_misalign | load_misalign | store_misalign |
                                idex_sys_ecall | idex_sys_ebreak | csr_illegal | xret_illegal | idex_illegal)
                               & ~mul_stall & ~mmu_stall;
    wire        take_int = irq_pending & idex_valid & ~mul_stall & ~mmu_stall;
    wire        ex_trap  = ex_trap_sync | take_int | ex_pagefault;
    wire        ex_mret = mret_ok & ~mul_stall & ~mmu_stall & ~take_int;
    wire        ex_sret = sret_ok & ~mul_stall & ~mmu_stall & ~take_int;
    wire [31:0] sync_cause = instr_misalign  ? `CAUSE_INSTR_MISALIGN
                           : load_misalign    ? `CAUSE_LOAD_MISALIGN
                           : store_misalign   ? `CAUSE_STORE_MISALIGN
                           : idex_sys_ecall   ? (32'd8 + {30'b0, csr_priv})
                           : idex_sys_ebreak  ? `CAUSE_BREAKPOINT
                           :                    `CAUSE_ILLEGAL;
    wire [31:0] ex_trap_cause = take_int     ? irq_cause
                              : ex_ifault    ? `CAUSE_INSTR_PAGE
                              : ex_dfault    ? {28'b0, xcause}
                              :                sync_cause;
    wire [31:0] ex_trap_val   = ex_ifault       ? idex_pc
                              : ex_dfault       ? ex_alu_result
                              : take_int        ? 32'b0
                              : instr_misalign  ? ex_target
                              : (load_misalign | store_misalign) ? mem_addr_ex
                              : idex_sys_ebreak  ? idex_pc
                              :                    32'b0;

    csr u_csr (
        .clk(clk), .rst_n(rst_n),
        .rd_en(idex_is_csr), .wr_en(csr_wr & ~ex_trap),
        .addr(idex_csr_addr), .wdata(csr_wval),
        .rdata(csr_rdata), .addr_valid(csr_addr_valid),
        .trap_en(ex_trap), .trap_cause(ex_trap_cause),
        .trap_epc(idex_pc), .trap_val(ex_trap_val),
        .mret_en(ex_mret), .sret_en(ex_sret), .mtip_i(clint_mtip),
        .trap_vec_o(csr_trap_vec), .ret_pc_o(csr_ret_pc), .priv_o(csr_priv),
        .irq_pending(irq_pending), .irq_cause(irq_cause), .satp_o(csr_satp)
    );

    wire [31:0] ex_result = idex_is_csr    ? csr_rdata
                          : idex_is_muldiv ? mul_result
                          :                  ex_alu_result;
    // adresa tradusa intra in MEM in locul celei virtuale
    wire [31:0] ex_mem_addr = (need_xlate & xstate == X_RDY) ? xpaddr : ex_result;

    assign ex_redirect    = (ex_take_pc | ex_trap | ex_mret | ex_sret) & ~mul_stall;
    assign ex_redirect_pc = ex_trap ? csr_trap_vec
                          : (ex_mret | ex_sret) ? csr_ret_pc
                          :                       ex_target;

    // registru EX/MEM (bula la mul_stall sau cand instructiunea ia trap)
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            exmem_reg_write <= 1'b0; exmem_mem_read <= 1'b0; exmem_mem_write <= 1'b0;
            exmem_wb_sel <= `WB_ALU; exmem_alu_result <= 32'b0; exmem_rs2_data <= 32'b0;
            exmem_pc4 <= 32'b0; exmem_rd <= 5'b0; exmem_funct3 <= 3'b0;
            exmem_is_amo <= 1'b0; exmem_is_lr <= 1'b0; exmem_is_sc <= 1'b0; exmem_amo_op <= 5'b0;
            exmem_valid <= 1'b0; exmem_instr <= `RV_NOP;
        end else if (mul_stall || mmu_stall || ex_trap) begin
            // bula sincrona: dezactiveaza efectele (clear sincron, nu reset)
            exmem_reg_write <= 1'b0; exmem_mem_read <= 1'b0; exmem_mem_write <= 1'b0;
            exmem_wb_sel <= `WB_ALU; exmem_alu_result <= 32'b0; exmem_rs2_data <= 32'b0;
            exmem_pc4 <= 32'b0; exmem_rd <= 5'b0; exmem_funct3 <= 3'b0;
            exmem_is_amo <= 1'b0; exmem_is_lr <= 1'b0; exmem_is_sc <= 1'b0; exmem_amo_op <= 5'b0;
            exmem_valid <= 1'b0; exmem_instr <= `RV_NOP;
        end else begin
            exmem_reg_write <= idex_reg_write; exmem_mem_read <= idex_mem_read;
            exmem_mem_write <= idex_mem_write; exmem_wb_sel <= idex_wb_sel;
            exmem_alu_result <= ex_mem_addr;
            exmem_rs2_data <= ex_rs2_fwd;
            exmem_pc4 <= idex_pc4; exmem_rd <= idex_rd; exmem_funct3 <= idex_funct3;
            exmem_is_amo <= idex_is_amo; exmem_is_lr <= idex_is_lr; exmem_is_sc <= idex_is_sc; exmem_amo_op <= idex_amo_op;
            exmem_valid <= idex_valid; exmem_instr <= idex_instr;
        end
    end

    // ============================================================
    //  ETAPA MEM
    // ============================================================
    wire [1:0] mem_off = exmem_alu_result[1:0];

    reg  [31:0] mem_store_data;
    reg  [3:0]  mem_store_strb;
    always @(*) begin
        case (exmem_funct3)
            `F3_SB: begin
                mem_store_data = {24'b0, exmem_rs2_data[7:0]}  << (8*mem_off);
                mem_store_strb = 4'b0001 << mem_off;
            end
            `F3_SH: begin
                mem_store_data = {16'b0, exmem_rs2_data[15:0]} << (8*mem_off);
                mem_store_strb = 4'b0011 << mem_off;
            end
            `F3_SW: begin
                mem_store_data = exmem_rs2_data;
                mem_store_strb = 4'b1111;
            end
            default: begin
                mem_store_data = exmem_rs2_data;
                mem_store_strb = 4'b0000;
            end
        endcase
    end

    // ============================================================
    //  Extensia A: AMO read-modify-write + LR/SC
    // ============================================================
    wire [31:0] amo_wval;
    atomic_unit u_amo (
        .amo_op(exmem_amo_op), .mem_val(dmem_rdata),
        .rs2_val(exmem_rs2_data), .result(amo_wval)
    );
    // rezervare pentru LR/SC (un singur hart): set la LR, golita la orice SC
    reg        resv_valid;
    reg [31:0] resv_addr;
    wire sc_ok = exmem_is_sc && resv_valid && (resv_addr == exmem_alu_result);
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            resv_valid <= 1'b0;
        else if (exmem_valid && exmem_is_lr) begin
            resv_valid <= 1'b1; resv_addr <= exmem_alu_result;
        end else if (exmem_valid && exmem_is_sc)
            resv_valid <= 1'b0;
    end

    wire        clint_sel  = exmem_valid & (exmem_mem_read | exmem_mem_write)
                           & (exmem_alu_result[31:16] == `CLINT_HI);
    wire [31:0] clint_rdata;
    wire        clint_mtip;
    clint u_clint (
        .clk(clk), .rst_n(rst_n),
        .sel(clint_sel), .we(clint_sel & exmem_mem_write),
        .off(exmem_alu_result[15:0]), .wdata(exmem_rs2_data),
        .rdata(clint_rdata), .mtip(clint_mtip)
    );

    assign dmem_addr  = walker_bus ? mmu_mem_addr : exmem_alu_result;
    assign dmem_wdata = exmem_is_amo ? amo_wval :
                        exmem_is_sc  ? exmem_rs2_data : mem_store_data;
    assign dmem_we    = walker_bus ? 1'b0 : ((exmem_mem_write | exmem_is_amo | sc_ok) & ~clint_sel);
    assign dmem_wstrb = walker_bus ? 4'b0000 :
                        (exmem_is_amo | sc_ok) ? 4'b1111 :
                        exmem_mem_write       ? mem_store_strb : 4'b0000;

    wire [7:0]  mem_ld_byte = dmem_rdata[8*mem_off +: 8];
    wire [15:0] mem_ld_half = dmem_rdata[8*mem_off +: 16];
    reg  [31:0] mem_load_data;
    always @(*) begin
        case (exmem_funct3)
            `F3_LB : mem_load_data = {{24{mem_ld_byte[7]}},  mem_ld_byte};
            `F3_LH : mem_load_data = {{16{mem_ld_half[15]}}, mem_ld_half};
            `F3_LW : mem_load_data = dmem_rdata;
            `F3_LBU: mem_load_data = {24'b0, mem_ld_byte};
            `F3_LHU: mem_load_data = {16'b0, mem_ld_half};
            default: mem_load_data = dmem_rdata;
        endcase
        if (clint_sel)   mem_load_data = clint_rdata;
        if (exmem_is_sc) mem_load_data = {31'b0, ~sc_ok};
    end

    // registru MEM/WB
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            memwb_reg_write_r <= 1'b0; memwb_wb_sel <= `WB_ALU;
            memwb_alu_result <= 32'b0; memwb_load_data <= 32'b0; memwb_pc4 <= 32'b0;
            memwb_rd_r <= 5'b0;
            memwb_valid <= 1'b0; memwb_instr <= `RV_NOP;
        end else begin
            memwb_reg_write_r <= exmem_reg_write; memwb_wb_sel <= exmem_wb_sel;
            memwb_alu_result <= exmem_alu_result; memwb_load_data <= mem_load_data;
            memwb_pc4 <= exmem_pc4; memwb_rd_r <= exmem_rd;
            memwb_valid <= exmem_valid; memwb_instr <= exmem_instr;
        end
    end

    assign memwb_reg_write = memwb_reg_write_r;
    assign memwb_rd        = memwb_rd_r;

    // ============================================================
    //  ETAPA WB
    // ============================================================
    reg [31:0] wb_mux;
    always @(*) begin
        case (memwb_wb_sel)
            `WB_ALU: wb_mux = memwb_alu_result;
            `WB_MEM: wb_mux = memwb_load_data;
            `WB_PC4: wb_mux = memwb_pc4;
            default: wb_mux = memwb_alu_result;
        endcase
    end
    assign wb_data = wb_mux;

endmodule
