#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int n, m;

	for (n = 0; n <= 16; n++)
	{
		for (m = 0; m <= 16; m++)
		{
			*(s + n) = m + 1;
		}
		*s = *(s + n);

	}
	return (0);
}

