#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Amount of bytes
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	char *n;

	n = malloc(sizeof(b) * 5);
	if (n == NULL)
		exit(98);
	return (n);
}

