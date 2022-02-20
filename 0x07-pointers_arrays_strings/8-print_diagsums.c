#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square
 *	matrix of integers
 * @s: Pointer to matrix
 * @size: Integer size
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int n, m, sum;

	for (n = 0; n <= size; n++)
	{
		for (m = 0; m <= size; m++)
		{
			if (n = m)
			{
				sum += a[n][m];
				printf("%d", sum);
			}
			else
			{
				break;
			}
			printf(", ");
		}
		printf("\n");
	}
}

