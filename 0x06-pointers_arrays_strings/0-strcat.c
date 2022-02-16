#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to first string
 * @src: Pointer to second string
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int n;

	n = 0;
	while (n >= 0)
	{
		*(dest + n) += *(src + n);
		if (n != '\0')
		{
			m = *(dest + n) + *(src + n);
		}
	}
}

