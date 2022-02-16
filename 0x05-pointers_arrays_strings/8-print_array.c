#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers separated by comma.
 * @a: Pointer to array
 * @n: Number of elements
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d, ", a[m]);

		if (m == (n - 1))
		{
			printf("%d", a[m]);
		}
	}
	printf("\n");
}

