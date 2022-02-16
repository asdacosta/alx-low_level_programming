#include "main.h"
#include <stdio.h>

/**
 * _ato - Converts a string to an integer
 * @s: Pointer to string
 *
 * Return: Always 0
 */
int _atoi(char *s)
{
	int n;

	n = 0;
	while (n >= 0)
	{
		if ((s[n] = '-') || (s[n] = '+'))
		{
			s[n] = '-';
			printf("\n");
		}
		else if ((s[n] >= 0) && (s[n] <= 9))
		{
			return (s[n]);
			printf("\n");

		}
		else
		{
			return (0);
			printf("\n");
		}
	}
}

