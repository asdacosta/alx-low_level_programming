#include "main.h"

/**
 * create_array - Creates an array of char, and initializes
 *	with a specific char.
 * @size: Size of array
 * @c: Storaged char
 *
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int n;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		ar[n] = c;

	return (ar);
}

