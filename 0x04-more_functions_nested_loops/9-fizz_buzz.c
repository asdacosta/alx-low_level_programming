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
	int n, m, p, q;

	for (n = 1; n <= 100; n++)
	{
		for (m = 3; m <= 100; m + 3)
		{
			printf("Fizz ");
		}
		for (p = 5; p <= 100; p + 5)
		{
			printf("Buzz ");
		}
		for (q = 15; q <= 100; q + 15)
		{
			printf("FizzBuzz ");
		}

		printf("%d ", n);
	}
	return (0);
}

