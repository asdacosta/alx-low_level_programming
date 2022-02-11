#include <stdio.h>

/**
 * main - Prints smallest combinations of three digits. Each number is
 *	separated by a comma ',' and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, p;

	for (n = '0'; n < '8'; n++)
	{
		for (m = '1'; m < '9'; m++)
		{
			for (p = '2'; p <= '9'; p++)
			{
				if ((n < m) && (m < p))
				{
					putchar(n);
					putchar(m);
					putchar(p);

					if (n != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

