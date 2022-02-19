#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Memory area destination
 * @src: Memory area source
 * @n: Number of bytes
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		*(dest + m) = *(src + m);
	}

	return (dest);
}

