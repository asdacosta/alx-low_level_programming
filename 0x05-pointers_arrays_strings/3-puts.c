#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to string
 *
 * Return: Void
 */
void _puts(char *str)
{
	int n, m;

	n = 0;
	while (*(str + n) != '\0')
	{
		m = *(str + n);
		n++;
		_putchar(m);
	}
	_putchar('\n');
}

