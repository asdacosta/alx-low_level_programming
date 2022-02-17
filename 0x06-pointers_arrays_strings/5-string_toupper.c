#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of string to uppercase
 * @s: Pointer to string
 *
 * Return: Uppercase of string of pointer
 */
char *string_toupper(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		if ((*(s + n) >= 97) && (*(s + n) <= 122))
			*(s + n) = *(s + n) - 32;
		n++;
	}

	return (s);
}

