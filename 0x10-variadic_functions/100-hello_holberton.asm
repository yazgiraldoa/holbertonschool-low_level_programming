section .data
        text db "Hello, Holberton", 10

section .text
        global main

main:
     mov rax, 1
     mov rdi, 1
     mov rsi, text
     mov rdx, 17
     syscall
     mov rax, 60
     xor rdi, rdi
     syscall
