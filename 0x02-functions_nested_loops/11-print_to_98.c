#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98 followed
 *	by a new line.
 * @n: Number to start from.
 *
 * Return: Void
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n == 0)
	{
		for (n = 0; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
