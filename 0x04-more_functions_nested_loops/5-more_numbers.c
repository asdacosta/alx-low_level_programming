#include "main.h"

/**
 * more_numbers - Prints 10x the numbers from 0 to 14
 *
 * Return: Void
 */
void more_numbers(void)
{
	int n, m;

	m = '0';
	while (m < '10')
	{
		for (n = '0'; n <= '14'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		m++;
	}
}

