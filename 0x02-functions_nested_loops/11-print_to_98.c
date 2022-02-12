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
		for (; n <= 98; n++)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
}

