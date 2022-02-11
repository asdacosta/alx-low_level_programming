#include <stdio.h>

/**
 * main - Prints combinations of two two-digit numbers from 0 to 99.
 *	The two numbers are separated by space and combination of
 *	numbers are separated by comma and followed by space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
				if ((n = m) || (n > m))
				{
					putchar(n);
					putchar(m);
				}

				if (n != '9')
					putchar(' ');
				
				if ((n < m) || (n = m) || (n > m))
				{
					putchar(n);
					putchar(m);
				}

				if (m != '9')
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');

	return (0);
}

