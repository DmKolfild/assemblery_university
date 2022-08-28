.data
    fmt_in_double: .string "%lf %lf"
    fmt_out_double: .string "Double: %lf\n\n"
    msg_prompt: .string "Enter the double: "
.text

.globl foo3
	foo3:
    sub $40, %rsp

    //double
    lea msg_prompt(%rip), %rcx
    call puts

    lea fmt_in_double(%rip), %rcx
    lea 0(%rsp), %rdx
    lea 8(%rsp), %r8d
    call scanf

    movq 8(%rsp), %xmm0
    movq 0(%rsp), %xmm1
    call atan2

    lea fmt_out_double(%rip), %rcx
    movq %xmm0, %rdx
    call printf

    add $40, %rsp
    xor %eax, %eax
    ret
