section .data
    message db 'Hello, World!', 0

section .text
    global _start

_start:
    ; Write the message to the standard output
    mov eax, 4         ; System call number for write
    mov ebx, 1         ; File descriptor (1 = stdout)
    mov ecx, message   ; Address of the message
    mov edx, 13        ; Length of the message
    int 0x80           ; Call the kernel

    ; Exit the program
    mov eax, 1         ; System call number for exit
    xor ebx, ebx       ; Exit status (0)
    int 0x80           ; Call the kernel
 
section .data
message        db 'Hello, Holberton', 0

section .text
global _start

_start:
mov eax, 4
mov ebx, 1
mov ecx, message
mov edx, 13
int 0x80

mov eax, 1
xor ebx, ebx
int 0x80
