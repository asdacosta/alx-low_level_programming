#include "main.h"

/**
 * jack_bauer - Prints every minute of the day starting from 00:00 to 23:59
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int m, n, p, q;

	for (m = '0';m <= '2'; m++)
	{
		for (n = '0'; n <= '3'; n++)
		{
			for (p = '0'; p <= '5'; p++)
			{
				for (q = '0'; q <= '9'; q++)
				{
					_putchar(m);
					_putchar(n);
					_putchar(':');
					_putchar(p);
					_putchar(q);
				}
			}
		}
	}
}

