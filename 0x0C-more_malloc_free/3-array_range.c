#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimun integer in array
 * @max: Maximum integer in array
 *
 * Return: Pointer to newly created array.
 *	Null if min > max, and if malloc fails.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}

