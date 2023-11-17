section .data
	hello db 'Hello, Holberton', 0xA ; String to be printed with a newline character

section .text
	global _start

_start:
	; Write the string to stdout using write syscall
	; Syscall number for write is 1
	mov rax, 1
	; File descriptor for stdout is 1
	mov rdi, 1
	; Address of the string
	mov rsi, hello
	; Length of the string
	mov rdx, 18 ; 17 characters + 1 newline
	syscall

	; Exit the program using exit syscall
	; Syscall number for exit is 60
	mov rax, 60
	; Exit code 0
	xor rdi, rdi
	syscall

