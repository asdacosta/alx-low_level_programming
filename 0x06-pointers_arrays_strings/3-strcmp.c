#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: 0 if s1 and s2 are equal and a number otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int n, m;

	for (n = 0; n >= 0 && n <= '\0'; n++)
	{
		if (*(s1 + n) < *(s2 + n))
		{
			m = -15;
		}
		else if (*(s1 + n) > *(s2 + n))
		{
			m = 15;
		}
		else if (*(s1 + n) == *(s2 + n))
		{
			m = 0;
		}
	}

	return (m);
}

