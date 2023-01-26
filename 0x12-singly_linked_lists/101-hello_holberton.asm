section .data
msg db "Hello, Holberton", 0
section .text
global main
extern printf
main:
push rbp
mov rbp, rsp
mov rdi, msg
call printf
add rsp, 8
pop rbp
xor rax, rax
ret
