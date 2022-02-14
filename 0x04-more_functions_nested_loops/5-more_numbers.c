#include "main.h"

/**
 * more_numbers - Prints 10x the numbers from 0 to 14
 *
 * Return: Void
 */
void more_numbers(void)
{
	int n, m;

	m = 0;
	while (m <= 9)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + 48);
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
		m++;
	}
}

