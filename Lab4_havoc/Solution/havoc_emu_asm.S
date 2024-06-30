.globl XorAlgorithm
.text

XorAlgorithm: 
        push   rbp
        mov    rbp,rsp
        sub    rsp,0x10
        mov    QWORD PTR [rbp+0x10],rcx
        mov    DWORD PTR [rbp+0x18],edx
        mov    QWORD PTR [rbp+0x20],r8
        mov    QWORD PTR [rbp+0x28],r9
        mov    DWORD PTR [rbp-0x4],0x0
        mov    DWORD PTR [rbp-0x8],0x0
        jmp    compare
loop:
        mov    eax,DWORD PTR [rbp-0x4]
        movsxd rdx,eax
        mov    rax,QWORD PTR [rbp+0x28]
        sub    rax,0x1
        cmp    rdx,rax
        jne    modulo
        mov    DWORD PTR [rbp-0x4],0x0
modulo:
        mov    eax,DWORD PTR [rbp-0x8]
        movsxd rdx,eax
        mov    rax,QWORD PTR [rbp+0x10]
        add    rax,rdx
        movzx  r8d,BYTE PTR [rax]
        mov    eax,DWORD PTR [rbp-0x4]
        movsxd rdx,eax
        mov    rax,QWORD PTR [rbp+0x20]
        add    rax,rdx
        movzx  ecx,BYTE PTR [rax]
        mov    eax,DWORD PTR [rbp-0x8]
        movsxd rdx,eax
        mov    rax,QWORD PTR [rbp+0x10]
        add    rax,rdx
        mov    edx,r8d
        xor    edx,ecx
        mov    BYTE PTR [rax],dl
        add    DWORD PTR [rbp-0x4],0x1
        add    DWORD PTR [rbp-0x8],0x1
compare:    
        mov    eax,DWORD PTR [rbp-0x8]
        cmp    eax,DWORD PTR [rbp+0x18]
        jl     loop
        nop
        nop
        add    rsp,0x10
        pop    rbp
        ret