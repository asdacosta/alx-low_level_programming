#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0
 *
 * Return: Void
 */
void times_table(void)
{
	int n, m, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
		for (m = 0; m <= 9; m++)
		{
			result = n * m;
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
			_putchar(',');
		}

		_putchar('\n');
	}
}

