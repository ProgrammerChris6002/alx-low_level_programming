section .data
    hello db 'Hello, Holberton', 0  ; Null-terminated string
    format db '%s', 0              ; Format string for printf

section .text
    extern printf                 ; External reference to the C library function

    global main                   ; Entry point for the program

main:
    push rbp                      ; Save base pointer
    mov rdi, format               ; Set rdi to the address of the format string
    mov rsi, hello                ; Set rsi to the address of the hello string
    call printf                   ; Call printf function
    add rsp, 8                    ; Clean up the stack after the printf call

    xor rax, rax                  ; Set return value to 0 (success)
    pop rbp                       ; Restore base pointer
    ret                           ; Return from the program

