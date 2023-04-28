section .data
    msg db 'Hello, Holberton', 0   ; Define a null-terminated string

section .text
    global _start             ; Entry point for the program

_start:
    mov eax, 4                ; System call for 'write'
    mov ebx, 1                ; File descriptor for stdout
    mov ecx, msg              ; Address of the string to print
    mov edx, 13               ; Length of the string to print
    int 0x80                  ; Call the kernel to perform the system call

    mov eax, 1                ; System call for 'exit'
    xor ebx, ebx              ; Return code (0 for success)
    int 0x80                  ; Call the kernel to perform the system call

