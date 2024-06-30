clang -mllvm --x86-asm-syntax=intel -c havoc_emu_asm.S
clang -c havoc_emu.c
clang *.o -o havoc_emu.exe