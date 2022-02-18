#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to memory area
 * @b: Constant byte
 * @n: Number of bytes
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		*(s + m) = b;
	}
	return (s);
}

