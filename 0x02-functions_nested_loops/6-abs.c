#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: Number to check the absolute value
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
		_putchar(n);
	else 
		_putchar(-n);

	return (0);
}

