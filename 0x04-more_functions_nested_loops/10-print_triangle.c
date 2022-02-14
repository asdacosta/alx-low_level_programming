#include "main.h"

/**
 * print_triangle - Prints triangle
 * @size: Size of triangle
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int n;

	for (n = 1; n <= size; n++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
			_putchar(35);
		}
	}
}

