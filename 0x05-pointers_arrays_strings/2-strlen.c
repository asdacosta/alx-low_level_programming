#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int n, m, len;

	for (n = 0; n <= 20; n++)
	{
		for (m = 0; m <= 20; m++)
		{
			*(s + n) = m + 1;
			len = *(s + n);
		}

		_putchar((len % 10) + '0');
	}
}

