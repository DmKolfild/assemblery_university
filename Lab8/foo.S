.data
    msg:
    .string "PIN-24 Baranov, Demochkina\n"
.text
.globl foo
    foo:
    sub $8, %rsp
    lea msg(%rip), %rcx
    sub $32, %rsp
    call puts
    add $32, %rsp
    add $8, %rsp
    xor %eax, %eax

    ret
