#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power y
 * @x: Base number
 * @y: Exponent number
 *
 * Return: Number raised to the exponent, and -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x ** y);
}

