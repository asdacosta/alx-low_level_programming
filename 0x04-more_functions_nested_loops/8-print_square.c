#include "main.h"

/**
 * print_square - Prints square followed by a new line
 * @size: Size of the square
 *
 * Return: Void
 */
void print_square(int size)
{
	int n;

	for (n = 0; n < size; n++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(35);
		}
	}
	_putchar('\n');
}

