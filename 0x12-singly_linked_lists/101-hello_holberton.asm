section .data
hello db "Hello, Holberton",10,0 ; The string to be printed
format db "%s",0               ; Format string for printf

section .text
extern printf

global main

main:
; Call printf function to print the string
push hello
push format
call printf

; Exit the program
mov rax, 60         ; syscall: exit
xor rdi, rdi        ; status: 0
syscall
