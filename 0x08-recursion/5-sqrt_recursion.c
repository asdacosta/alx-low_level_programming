#include "main.h"

/**
 * exponent - Returns natrual square root of number
 * @n: Input number
 * @c: Iterator
 *
 * Return: Natrual square root or -1 if number has no sqrt
 */
int exponent(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + exponent(n, c + 1));
}

/**
 * _sqrt_recursion - Returns the natural or nonnegative square root
 *	of a number.
 * @n: The number
 *
 * Return: Natural square root or -1 if n does not have a natrual
 *	square root.
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (exponent(n, 2));

}

