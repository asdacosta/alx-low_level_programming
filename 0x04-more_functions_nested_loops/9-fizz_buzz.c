#include <stdio.h>

/**
 * main - Prints number from 1 to 100. For multiples of 3 it prints 'Fizz',
 *	multiples of  5 it prints 'Buzz' and for multiples of both
 *	3 and 5 it prints 'FizzBuzz'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, m3, m5, m15;
	m3 = 100 / 3;
	m5 = 100 / 5;
	m15 = 100 / 15;

	for (n = 1; n < 100; n++)
	{
		if (n == (3 * m))
		{
			for (m = 1; m <= m3 ; m++)
			{
				printf("Fizz ");
			}
		}
		else if (n == (5 * m))
		{
			for (m = 1; m <= m5; m++)
			{
					printf("Buzz ");
			}
		}
		else if (n == (15 * m))
		{
			for (m = 1; m <= m15; m++)
			{
				printf("FizzBuzz ");
			}
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");

	return (0);
}

