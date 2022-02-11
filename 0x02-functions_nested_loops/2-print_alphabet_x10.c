#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase 
 *	followed by a new line.
 *
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	int m;
	int n = 0;

	while (n <= 10)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}

		_putchar('\n');
		n++;
	}
}

