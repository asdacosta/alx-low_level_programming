#include <stdio.h>

/**
 * main - Prints largest prime factor
 *
 * Return: Void
 */

int main(void)
{
	long int n, m;

	n = 612852475143;
	for (m = 2; m <= n; m++)
	{
		if (n % m == 0)
		{
			n /= m;
			m--;
		}
	}
	printf("%ld\n", m);
	return (0);
}

