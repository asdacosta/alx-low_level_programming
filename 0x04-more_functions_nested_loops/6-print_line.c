#include "main.h"

/**
 * print_line - Draws a number of straight lines in the terminal
 * @n: Number of straight lines
 *
 * Return: Void
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

