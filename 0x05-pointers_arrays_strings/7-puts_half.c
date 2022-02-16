#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Pointer to string
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int n = 0, m;

	while (count >= 0)
	{
		if (str[n] == '\0')
			break;
		n++;
	}

	if (n % 2 == 1)
		m = n / 2;
	else
		m = (n - 1) / 2;

	for (m++; m < n; m++)
		_putchar(str[m]);
	_putchar('\n');

}

