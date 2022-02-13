#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of 3 or 5 
 *	below 1024
 *
 * Return: Void
 */
void main(void)
{
	int m, n, m3, m5, result3, result5, end, a, b;
	m3 = 1024 / 3;
	m5 = 1024 / 5;

	if (end < 1024)
	{
		for (m = 3; m < m3; m++)
		{
			for (n = 1; n < m3; n++)
			{
				result3 = m * n
				for (a = 5; a < m5; a++)
				{
					for (b = 1; b < m5; b++)
					{
						result5 = a * b;
						end = result3 + result5;
						printf("%d ", end);
					}
				}
			}
		}

	}
	printf("\n");
}

