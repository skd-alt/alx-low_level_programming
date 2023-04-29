section .text
	global main
main:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4	;sytem write call
	int 0x80	;call kernel

	mov eax, 1	;sytem exit
	int 0x80

section .data
	msg db "Hello, Holberton",0xa ;you can also use 10
	len equ $ -msg
	
