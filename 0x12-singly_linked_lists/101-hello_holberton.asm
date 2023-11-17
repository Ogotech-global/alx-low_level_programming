section	.data
	; Declare data section
	format db 'Hello, Holberton', 0 ; Null-terminated string

section	.text
	; Declare text section
	global main ; Entry point for the program
	extern printf ; Declare printf function

main:
	; Start of the main function
	mov edi, format ; Move the address of the format string to edi register
	xor eax, eax ; Clear eax register (set it to 0)
	call printf ; Call printf function
	mov eax, 0 ; Set the return value to 0 (exit code)
	ret ; Return from the main function

