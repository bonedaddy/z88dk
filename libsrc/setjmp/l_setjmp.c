/*
 *	setjmp(jmp_buf env)
 *
 *	djm 28/2/2000
 *
 *	We have no register vars so only need to
 *	save sp and return PC
 */


#include <setjmp.h>


int l_setjmp(jmp_buf *env)
{
#pragma asm
	pop	bc	;return address
	pop	hl	;&env
IF !__CPU_8080__ && !__GPU_GBZ80__
	push	iy
	pop	de	;de=iy, hl=&env
	ld	(hl),e
	inc	hl
	ld	(hl),d
	inc	hl
	inc	hl
	push	ix
	pop	de	;de=ix, hl=&env
	ld	(hl),e
	inc	hl
	ld	(hl),d
ELSE
	inc	hl
	inc	hl
	inc	hl
ENDIF
	inc	hl
IF __CPU_GBZ80__
	ld	a,l
	ld	l,e
	ld	e,a
	ld	a,h
	ld	h,d
	ld	d,a
ELSE
	ex	de,hl	;de=&env, hl=scratch
ENDIF
	ld	hl,0
	add	hl,sp	;stack pointer
	ex	de,hl	;hl=env+2, de=sp
	ld	(hl),e	;sp
	inc	hl
	ld	(hl),d
	inc	hl
	ld	(hl),c	;pc
	inc	hl
	ld	(hl),b	
	push	de
	push	bc

	ld	hl,0	;Have to return 0
#pragma endasm
}

