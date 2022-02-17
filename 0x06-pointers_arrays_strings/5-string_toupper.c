#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of string to uppercase
 * @s: Pointer to string
 *
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int n;

	for (n = 0; n >= 0 && n != '\0'; n++)
	{
		if (*(s + n) >= 97 && *(s + n) <= 122)
		{
			*(s + n) -= 32;
		}
		else if (*(s + n) >= 65 && *(s + n) <= 90)
		{
			*(s + n) = *(s + n);
		}
	}
	return (s);
}

