#include "main.h"

/**
 * _strstr - Finds first occurence of the substring 'needle' in the string
 *	'haystack'.
 * @haystack: First pointer to string
 * @needle: Second pointer to string
 *
 * Return: Pointer to the beginning of the located substring, or NULL
 *	if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int n, m;

	for (n = 0; *(haystack + n) != '\0'; n++)
	{
		for (m = 0; *needle != '\0'; m++)
		{
			if (*needle == *(haystack + m))
			{
				return (needle);
			}
		}
	}

	return ('\0');
}

