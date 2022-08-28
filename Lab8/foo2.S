.data
    fmt_in_short: .string "%hd"
    fmt_out_short: .string "Short: %hd\n"
    fmt_in_integer: .string "%d"
    fmt_out_integer: .string "Integer: %d\n"
    fmt_in_long: .string "%ld"
    fmt_out_long: .string "Long: %ld\n"
    fmt_in_float: .string "%f"
    fmt_out_float: .string "Float: %f\n"
    fmt_in_double: .string "%lf"
    fmt_out_double: .string "Double: %lf\n"

    msg_prompt1: .string "Enter the short: "
    msg_prompt2: .string "Enter the integer: "
    msg_prompt3: .string "Enter the long: "
    msg_prompt4: .string "Enter the float: "
    msg_prompt5: .string "Enter the double: "
.text
.globl foo2
    foo2:
    sub $40, %rsp

    //short
    lea msg_prompt1(%rip), %rcx
    call puts

    lea fmt_in_short(%rip), %rcx
    lea (%rsp), %rdx
    call scanf

    lea fmt_out_short(%rip), %rcx
    mov (%rsp), %edx
    call printf

    //integer
    lea msg_prompt2(%rip), %rcx
    call puts

    lea fmt_in_integer(%rip), %rcx
    lea (%rsp), %rdx
    call scanf

    lea fmt_out_integer(%rip), %rcx
    mov (%rsp), %edx
    call printf

    //long
    lea msg_prompt3(%rip), %rcx
    call puts

    lea fmt_in_long(%rip), %rcx
    lea (%rsp), %rdx
    call scanf

    lea fmt_out_long(%rip), %rcx
    mov (%rsp), %edx
    call printf


    //float
    lea msg_prompt4(%rip), %rcx
    call puts

    lea fmt_in_float(%rip), %rcx
    lea (%rsp), %rdx
    call scanf

    lea fmt_out_float(%rip), %rcx
    cvtss2sd (%rsp), %xmm1
    movq %xmm1, %rdx
    call printf


    //double
    lea msg_prompt5(%rip), %rcx
    call puts

    lea fmt_in_double(%rip), %rcx
    lea (%rsp), %rdx
    call scanf

    lea fmt_out_double(%rip), %rcx
    movq (%rsp), %rdx
    call printf


    xor %eax, %eax
    add $40, %rsp
    ret
