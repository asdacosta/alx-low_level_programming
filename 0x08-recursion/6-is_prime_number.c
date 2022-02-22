#include "main.h"

/**
 * prime - Checks for prime number
 * @n: Input number
 * @c: Iterator
 *
 * Return: 1 if input int is a prime number, and 0 otherwise
 */
int prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}

/**
 * is_prime_number - Checks for a prime number
 * @n: Number to check
 *
 * Return: 1 if input integer is a prime number, and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}

