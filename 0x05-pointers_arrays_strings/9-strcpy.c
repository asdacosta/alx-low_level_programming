#include "main.h"

/**
 * _strcpy - Copies string pointed by src including null byte (\0)
 *	to the buffer pointed by dest
 * @dest: Written string
 * @src: String copied from
 *
 * Return: Pointer to dest
 */
char *strcpy(char *dest, char *src)
{
	*dest = *src;

	return (dest);
}

