; extern printf
section data
msg: db "Hello, Holberton",0
fmt: db "%s",10,0
seccion.text
global main
main:
push rbp
mov rsi, fmt
mov csi, msg
mov rax, 0
call printf

pop rbp
mov rax, 0
ret
