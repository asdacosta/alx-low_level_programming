#include "main.h"

/**
 * wildcmp - Compares two strings to know if they are identical
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: 1 if strings are identical and 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	else
		return (0);
}

