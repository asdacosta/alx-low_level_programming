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
	int n = 0, m;

	while (*(s + n) != '\0')
	{
		if (*(s + n) == c)
		{
			m = 0;
			while ((*(s + m) >= c) && (*(s + m) != '\0'))
			{
				return (s + m);
			}
		}
		else
		{
			return ('\0');
		}
	}

	return (s);
}

