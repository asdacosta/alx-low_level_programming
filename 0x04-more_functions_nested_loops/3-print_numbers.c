#include "main.h"

/**
 * print_numbers - Prints the number from 0 to 9 followed by a new line
 *
 * Return: Void
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

