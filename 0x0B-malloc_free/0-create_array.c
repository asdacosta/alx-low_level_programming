#include "main.h"

/**
 * create_array - Creates an array of char, and initializes
 *	with a specific char.
 * @size: Size of memory to print
 * @c: The character
 *
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char p, *ar;
	int n, m;

	ar = malloc(sizeof(char) * size);

	n = 0;
	while (n > 0)
	{
		ar = malloc(sizeof(char) * size);
		if (size == 0)
		{
			p = "NULL";
			_putchar(p);
		}
		else if (size > 0)
		{
			for (m = 0; m < size; m++)
			{
				ar[m] = c;
				_putchar(ar[m]);
			}
		}
	}
	return (0);
}

