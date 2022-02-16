#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to string
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int n = 0;

	while (n >= 0)
		{
			_putchar(s[n]);

			if (n = 32)
			{
				_putchar(s[-n]);
			}
		}
	_putchar('\n');
}

