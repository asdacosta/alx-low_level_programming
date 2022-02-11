#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * Return: 1 is c is a lowercase and 0 otherwise
 */
int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
		return (1);
	for (c = 'A'; c <= 'Z'; c++)
		return (0);
}

