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
	int **ss;
	n = 0;

	while (*(s + n) != '\0')
	{
		*(s + n) = b;
	}
	ss = &s;
	return (ss);
}

