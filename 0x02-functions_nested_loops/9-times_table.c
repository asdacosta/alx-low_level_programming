#include "main.h"

void times_table(void)
{
	int n, m;

	n = '0';
	while (n < '9')
	{
		_putchar(n);
		if (n != '9')
		{
			_putchar(',');
			_putchar(' ');
		}

		for (m = '0'; m <= '9'; m++)
		{
			_putchar(n * m);
		}

		n++;
	}
}
