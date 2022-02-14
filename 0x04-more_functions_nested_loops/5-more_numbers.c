#include "main.h"

/**
 * more_numbers - Prints 10x the numbers from 0 to 14
 *
 * Return: Void
 */
void more_numbers(void)
{
	int n;

	n = '0';
	while (n < '10')
	{
		for (n = '0'; n <= '14'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		n++;
	}
}

