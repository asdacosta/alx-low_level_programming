#include <stdio.h>

/**
 * main - Prints different combination of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';
	int m;

	while ((n >= '0') && (n <= '8'))
	{
		putchar(n);

		for (m = '1'; m <= '9'; m++)
		{
			putchar(m);
			
			if (m != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar(n + '1');
	}

	putchar('\n');

	return (0);
}

