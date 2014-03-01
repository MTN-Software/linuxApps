;
; build: nasm -f elf -F stabs name.asm
; link:  ld -o name name.o
;
; In 64-bit long mode you can use 64-bit registers
; Also change "-f elf" for "-f elf64" in build command
;
section  .data			; section for initialized data
str:	 db 'Hello world!', 0Ah	; message string witht new-line char at the end
str_len: equ $ - str		; calcs the length of string bu subtracting this address from the str's start address

section .text			; this is the code section
global _start			; _start is the entry point and needs global scope to be 'seen' by the linker -   equivalent to main() in C/C++

_start:				; procedure start
       mov	eax, 4
       mov	ebx, 1
       
       mov	ecx, str
       mov 	edx, str_len
       int	80h
       
       mov	eax, 1
       mov	ebx,0
       int 80h