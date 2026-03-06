.global sum_array
    .text

sum_array:
    xor %eax, %eax
    xor %rcx, %rcx

.L_loop_start:
    cmp %rsi, %rcx
    jge .L_loop_end

    add (%rdi, %rcx, 4), %eax
    inc %rcx
    jmp .L_loop_start

.L_loop_end:
    ret
    