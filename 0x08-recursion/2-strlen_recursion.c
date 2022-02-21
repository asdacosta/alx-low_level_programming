#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: Pointer to string
 *
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s != '\0')
	{
		*s = &n;
		_strlen_recursion(s + 1);
	}

	return (0);
}

