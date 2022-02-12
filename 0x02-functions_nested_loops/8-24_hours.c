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

		n = '0';
		while (n <= '3')
		{
			_putchar(n);
			_putchar(':');

			p = '0';
			while (p <= '5')
			{
				_putchar(p);
				
				q = '0';
				while (q <= '9')
				{
					_putchar(q);
					q++;
				}
				_putchar('\n');
				p++;
			}
			n++;
		}
		m++;
	}
}

