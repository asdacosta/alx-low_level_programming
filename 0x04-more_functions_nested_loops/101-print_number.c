#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer
 *
 * Return: Void
 */
void print_number(int n)
{
	unsigned int p, d, count;

	if (n < 0)
	{
		_putchar(45);
		p = n * -1;
	}
	else
	{
		p = n;
	}
	
	d = p;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((p / count) % 10) + 48);
	}
}

