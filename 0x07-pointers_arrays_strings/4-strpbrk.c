#include "main.h"

/**
 * _strpbrk - Locates the first occurence in the string 's' of
 *	of any of the bytes in the string 'accept'
 * @s: First pointer to string
 * @accept: Second pointer to string
 *
 * Return: A pointer to the byte in 's' that matches one of the bytes
 *	in 'accept', or 'NULL' if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (m = 0; *(s + m) != '\0'; m++)
	{
		for (n = 0; *(accept + n) != '\0'; n++)
		{
			if (*(accept + n) == *(s + m))
			{
				return (s + m);
			}
		}
	}

	return ('\0');
}

