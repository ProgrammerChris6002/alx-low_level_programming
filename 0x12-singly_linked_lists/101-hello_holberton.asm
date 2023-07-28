section .data
    hello db 'Hello, Holberton', 0  ; Null-terminated string

section .text
    extern printf                 ; External reference to the C library function

    global main                   ; Entry point for the program

main:
    mov rdi, hello                ; Set rdi to the address of the format string
    call printf                   ; Call printf function

    xor rax, rax                  ; Set return value to 0 (success)
    ret                           ; Return from the program

