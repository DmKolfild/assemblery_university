.data
    fmt_in_integer: .string "%d %u"
    fmt_out_integer: .string "Value: %d     Step: %u\n\n"

    msg_prompt2: .string "Enter the integer: "
.text
.globl foo4_2
    foo4_2:
    sub $40, %rsp

    //integer
    lea msg_prompt2(%rip), %rcx
    call puts

    //ввод значения числа, и количества членов последовательности
    lea fmt_in_integer(%rip), %rcx
    lea 0(%rsp), %rdx
    lea 8(%rsp), %r8
    call scanf


    movl 8(%rsp), %esi
    movl 0(%rsp), %ebx
    begin:
        cmpl $0, %esi
        je end_loop

        // счётчик цикла
        subl $1, %esi

        //определение остатка от деления на 2
        movl %ebx, %edi
        and $1, %edi
        cmpl $1, %edi
        je setting_1
        jne setting_2

        setting_1:
            // умножение на 3 и прибавление 1
            imul $3, %ebx
            add $1, %ebx
            jmp end_check
        setting_2:
            // целове от деления на 2
            sar $1, %ebx
            jmp end_check
        end_check:
            nop

        // вывод значения и номер шага
        lea fmt_out_integer(%rip), %rcx
        movl %ebx, 0(%rsp)
        movl %ebx, 0(%rsp)
        movq 0(%rsp), %rdx
        movq 8(%rsp), %r8
        call printf

        //повтор цикла
        jmp end
    end:
        jmp begin
    end_loop:
        nop

    xor %eax, %eax
    add $40, %rsp
    ret

