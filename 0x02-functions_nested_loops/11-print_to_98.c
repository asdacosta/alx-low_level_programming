#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98 followed
 *	by a new line.
 * @n: Number to start from.
 *
 * Return: Void
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
	else if (n == 0)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
		printf("\n");
	}
	else 
	{
		for (; n <= 98; n++)
		{
				printf("%d, ", n);
		}
		printf("\n");
	}
}

