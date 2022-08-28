
.data
    fmt_in_double: .string "%lf %lf"
    fmt_out_double: .string "Double: %lf\n\n"
    msg_prompt: .string "Enter the double: "
.text
.globl foo3_2
    foo3_2:
    sub $40, %rsp

    //double
    lea msg_prompt(%rip), %rcx
    call puts

    lea fmt_in_double(%rip), %rcx
    lea 0(%rsp), %rdx
    lea 8(%rsp), %r8
    call scanf

    fldl 8(%rsp) // y в стеке
    fldl 0(%rsp) // x, y в стеке
    fpatan
    fstpl 0(%rsp)


    lea fmt_out_double(%rip), %rcx
    movq (%rsp), %rdx
    call printf

    xor %eax, %eax
    add $40, %rsp
    ret
