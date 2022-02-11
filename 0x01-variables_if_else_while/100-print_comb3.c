#include <stdio.h>

/**
 * main - Prints different combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = '0'; n < '9'; n++)
	{
		for (m = '1'; m <= '9'; m++)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);

				if (n != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

