#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The integer
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	unsined int *n, m;

	n = malloc(sizeof(b) * 5);
	for (m = 0; m < b; m++)
	{
		if (n == NULL)
			free(n);
			printf("98\n");
	}

	printf("%d\n", n);
}

