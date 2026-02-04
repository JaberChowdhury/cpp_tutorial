section .data
    msg db "Setup complete!", 10

section .text
    global _start

_start:
    mov rax, 1        ; 'write' system call
    mov rdi, 1        ; file descriptor 1 (stdout)
    mov rsi, msg      ; string to print
    mov rdx, 16       ; length of string
    syscall

    mov rax, 60       ; 'exit' system call
    xor rdi, rdi      ; return code 0
    syscall
