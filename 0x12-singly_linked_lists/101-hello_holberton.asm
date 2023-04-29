section .text
	global main
	extern printf
main:
	mov edi, fmt
	mov eax, 0	;vars 0
	call printf
	ret

fmt: db "Hello, Holberton", 10, 0
