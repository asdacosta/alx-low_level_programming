#include "main.h"

/**
 * _sqrt_recursion - Returns the natural or nonnegative square root
 *	of a number.
 * @n: The number
 *
 * Return: Natural square root, and -1 if n does not have a natrual
 *	square root.
 */
int _sqrt_recursion(int n)
{
	int m;

	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n % m == 0)
		return (_sqrt_recursion(n / m));
	else
		return (-1)

}

