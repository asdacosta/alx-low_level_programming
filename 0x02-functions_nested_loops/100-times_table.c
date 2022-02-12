#include <stdio.h>

/**
 * print_times_table - Prints n times table starting with o
 * @n: Number to print 
 *
 * Return: Void
 */
void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
	{
		printf("\n");
	}
	else if (n <= 15)
	{
		for (; n <= 15; n--)
		{
			printf("%d, ", n);
			printf("\n");
		}
	}
	else if (n >= 0)
	{
		for (; n >= 0; n++)
		{
			printf("%d, ", n);
			printf("\n");
		}
	}
}

