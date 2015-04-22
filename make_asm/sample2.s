/* execve.s */

	.intel_syntax noprefix
	.globl _start

_start:
	push 0x0068732f
	push 0x6e69622f
	mov  ebx,esp
	xor  edx,edx /* for intilize edx */
	push edx
	push ebx
	mov  ecx, esp
	mov  eax, 11
	int 0x80

	
