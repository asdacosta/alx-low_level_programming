#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to string
 * @c: Character
 *
 * Return: Pointer to first occurence of the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

