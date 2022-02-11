#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * Return: 1 is c is a lowercase and 0 otherwise
 */
int _islower(int c)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (c == n)
			return (1);
	}
	return (0);
}

