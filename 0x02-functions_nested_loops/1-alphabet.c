#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase followed by a new line.
 *
 * Return: No value
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

