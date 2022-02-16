#include "main.h"

/**
 * _strcpy - Copies string pointed by src including null byte (\0)
 *	to the buffer pointed by dest
 * @dest: Written string
 * @src: String copied from
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (n >= 0)
	{
		*(dest + n) = *(src + n);
		
		if (*(src + n) == '\0')
		{
			break;
		}
		n++;
	}

	return (dest);
}

