#include "main.h"

/**
 * jack_bauer - Prints every minute of the day starting from 00:00 to 23:59
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int m, n, p, q;

	m = '0';
	while (m <= '2')
	{
		_putchar(m);

		for (n = '0'; n <= '3'; n++)
		{
			_putchar(n);
			n++;
			break;
		}
		_putchar(':');

		p = '0';
		while (p <= '5')
		{
			_putchar(p);
			
			for (q = '0'; q <= '9'; q++)
			{
				_putchar(q);
				q++;
				break;
			}
			p++;
		}
		m++;
	}
}

