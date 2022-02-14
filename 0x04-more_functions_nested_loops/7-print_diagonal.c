#include "main.h"

/**
 * print_diagonal - Draws diagonal n times on the terminal 
 * @n: Number of times to draw \
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m != -n && m != 0)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}

