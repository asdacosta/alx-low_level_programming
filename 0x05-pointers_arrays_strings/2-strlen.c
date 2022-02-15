#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}

