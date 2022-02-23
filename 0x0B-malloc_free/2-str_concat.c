#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int n;

	for (n = 0; s1[n] != '\0'; n++)
	{
		for (m = 0; s2[m] != '\0'; m++)
		{
			s = s1[n] + s[m];
		}
	}
	s = (char *)malloc(sizeof(char) * (n + 1));

	if (s == NULL)
		return (NULL);

	return (s);
}

