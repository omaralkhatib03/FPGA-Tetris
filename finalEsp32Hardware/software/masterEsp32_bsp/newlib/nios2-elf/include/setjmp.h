/*
	setjmp.h
	stubs for future use.
*/

#ifndef _SETJMP_H_
#define _SETJMP_H_

  /* Indicate that we honor AEABI portability if requested.  */
#if defined _AEABI_PORTABILITY_LEVEL && _AEABI_PORTABILITY_LEVEL != 0 && !defined _AEABI_PORTABLE
# define _AEABI_PORTABLE
#endif

#include "_ansi.h"
#include <machine/setjmp.h>

_BEGIN_STD_C

#ifdef __GNUC__
void	longjmp (jmp_buf __jmpb, int __retval)
			__attribute__ ((__noreturn__));
#else
void	longjmp (jmp_buf __jmpb, int __retval);
#endif
int	setjmp (jmp_buf __jmpb);

_END_STD_C

#endif /* _SETJMP_H_ */

