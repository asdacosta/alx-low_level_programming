#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Pointer to string
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int n, m, p, q, a;

	n = 0;
	while (str[n] != '\0')
	{
		m = str[n] + 1;
		n++;
		p = m / 2;

		for (q = 0; q <= p; q++)
		{
			_putchar(q);
			if (q == (2 * q) + 1)
			{
				a = (m - 1) / 2;
				_putchar(a);
			}
		}
	}
	_putchar('\n');

}

