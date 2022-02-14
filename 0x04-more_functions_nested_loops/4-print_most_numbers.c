#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except 2 and 4
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	int n;

	if (n != 2 && n != 4)
	{
		for (n = '0'; n <= '9'; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}

