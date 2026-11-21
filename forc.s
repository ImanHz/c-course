	.intel_syntax noprefix
	.file	"for.c"
	.text
	.globl	main                            # -- Begin function main
	.p2align	4
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:
	push	rbx
	.cfi_def_cfa_offset 16
	.cfi_offset rbx, -16
	lea	rbx, [rip + .L.str]
	mov	rdi, rbx
	xor	esi, esi
	xor	eax, eax
	call	printf@PLT
	mov	rdi, rbx
	mov	esi, 1
	xor	eax, eax
	call	printf@PLT
	mov	rdi, rbx
	mov	esi, 2
	xor	eax, eax
	call	printf@PLT
	mov	rdi, rbx
	mov	esi, 3
	xor	eax, eax
	call	printf@PLT
	mov	rdi, rbx
	mov	esi, 4
	xor	eax, eax
	call	printf@PLT
	mov	rdi, rbx
	mov	esi, 5
	xor	eax, eax
	call	printf@PLT
	mov	rdi, rbx
	mov	esi, 6
	xor	eax, eax
	call	printf@PLT
	mov	rdi, rbx
	mov	esi, 7
	xor	eax, eax
	call	printf@PLT
	mov	rdi, rbx
	mov	esi, 8
	xor	eax, eax
	call	printf@PLT
	mov	rdi, rbx
	mov	esi, 9
	xor	eax, eax
	call	printf@PLT
	xor	eax, eax
	pop	rbx
	.cfi_def_cfa_offset 8
	ret
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"%d \n"
	.size	.L.str, 5

	.ident	"Ubuntu clang version 21.1.8 (6ubuntu1)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
