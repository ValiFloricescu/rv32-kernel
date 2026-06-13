# ============================================================
#  Dockerfile  -  Imagine pentru conformitate RISCOF (DUT pipe5)
# ------------------------------------------------------------
#  Contine: Icarus Verilog, toolchain bare-metal RISC-V,
#  Spike (model de referinta), RISCOF + riscv-config, suita
#  oficiala riscv-arch-test. Referinta = Spike (nu Sail), ca sa
#  evitam dependenta grea de OCaml/opam.
#
#  Truc toolchain: folosim riscv64-unknown-elf-* din Ubuntu cu
#  symlink-uri riscv32-unknown-elf-*. Testele arch-test se
#  compileaza cu -nostdlib/-nostartfiles, deci NU sunt necesare
#  bibliotecile rv32 (multilib) -> compilatorul produce corect
#  ELF rv32 cu -march=rv32imzicsr -mabi=ilp32.
# ============================================================
FROM ubuntu:24.04
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
      build-essential git autoconf automake \
      device-tree-compiler \
      python3 python3-pip \
      iverilog yosys \
      gcc-riscv64-unknown-elf binutils-riscv64-unknown-elf \
      ca-certificates \
    && rm -rf /var/lib/apt/lists/*

# symlink-uri riscv32-unknown-elf-* -> riscv64-unknown-elf-*
RUN for t in gcc g++ objcopy objdump nm readelf ld as ar size strip; do \
      ln -sf "$(command -v riscv64-unknown-elf-$t)" /usr/local/bin/riscv32-unknown-elf-$t ; \
    done

# Spike (riscv-isa-sim) ca model de referinta
RUN git clone --depth 1 https://github.com/riscv-software-src/riscv-isa-sim /tmp/spike \
    && cd /tmp/spike && mkdir build && cd build \
    && ../configure --prefix=/opt/spike \
    && make -j"$(nproc)" && make install \
    && rm -rf /tmp/spike
ENV PATH="/opt/spike/bin:${PATH}"

# RISCOF + riscv-config
RUN pip3 install --no-cache-dir --break-system-packages riscof

# suita oficiala de teste arhitecturale
# NOTA: folosim branch-ul vechi 'old-framework-3.x' (layout riscv-test-suite/),
# compatibil cu RISCOF clasic. Branch-ul 'main' a migrat la un flux nou,
# incompatibil cu pluginul pipe5 si cu `riscof run --suite/--env`.
# Pinned pe un commit cunoscut pentru reproductibilitate.
ARG ARCHTEST_REF=9bceaf5c
RUN git clone https://github.com/riscv-non-isa/riscv-arch-test /opt/riscv-arch-test \
    && cd /opt/riscv-arch-test && git checkout ${ARCHTEST_REF}
ENV RISCV_ARCH_TEST=/opt/riscv-arch-test

# verificare rapida la build
RUN riscv32-unknown-elf-gcc --version >/dev/null && riscof --version && spike --help 2>/dev/null | head -1 || true

WORKDIR /work
