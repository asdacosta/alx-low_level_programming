#include "main.h"

/**
 * factorial - Returns the factorial of a given integer
 * @n: The integer
 *
 * Return: Factorial of integer and -1 if the integer is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

