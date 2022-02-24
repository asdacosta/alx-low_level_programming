#ifndef _FUNCTION_LIKE_MACRO_
#define _FUNCTION_LIKE_MACRO_

#include <stdio.h>

#define ABS(x) x
#if x >= 0
	printf("%d", x);
#else
	printf("%d", x * -1);
#endif /* #define ABS(x) x */

#endif /* #ifndef _FUNCTION_LIKE_MACRO_ */

