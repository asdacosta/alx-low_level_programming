#ifndef _FUNCTION_LIKE_MACRO_
#define _FUNCTION_LIKE_MACRO_

#include <stdio.h>

#define ABS(x) x


/**
 * main - Computes the absolute value of negative or positive number
 *
 * Return: Always 0
 */
int main(void)
{
#if x >= 0
	printf("%d", x);
#else
	printf("%d", x * -1);
#endif /* #define ABS(x) x */

	return (0);
}
#endif /* #ifndef _FUNCTION_LIKE_MACRO_ */

