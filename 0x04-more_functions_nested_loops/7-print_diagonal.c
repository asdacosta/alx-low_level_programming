#include "main.h"

/**
 * print_diagonal - Draws diagonal n times on the terminal 
 * @n: Number of times to draw \
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int m, p;

	for (m = 0; m < n; m++)
	{
		for (p = 0; p < m; p++)
		{
			_putchar(' ');
		}
		_putchar(92);

		if (m < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

