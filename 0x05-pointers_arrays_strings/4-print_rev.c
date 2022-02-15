#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string
 *
 * Return: Always 9
 */
void print_rev(char *s)
{
	int n, m;

	n = 0;
	while (*(s + n) != '\0')
	{
		m = *(s + n);
		n--;
		_putchar(m);
	}
	_putchar('\n');
}

