#include "main.h"

/**
 * print_line - Draws a number of straight lines in the terminal
 * @n: Number of straight lines
 *
 * Return: Void
 */
void print_line(int n)
{
	for (n = '0'; n <= '10'; n++)
	{
		if (n == '0')
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}

