#include "main.h"

/**
 * is_palindrome - Checks if a string reads the same backwards as forwards.
 * @s: Pointer to string
 *
 * Return: 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int n = 0, m = 0;

	if (n < 0)
	{
		if (m >= 0)
		{
			if (*(s + n) == *(s + m))
			{
				return (1);
			}
		}
	}

	return (0);
}

