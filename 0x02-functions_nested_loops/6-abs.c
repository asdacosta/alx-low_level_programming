#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: Number to check the absolute value
 *
 * Return: Absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}

