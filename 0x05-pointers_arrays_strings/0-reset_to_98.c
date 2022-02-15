#include "main.h"

/**
 * main - Takes a pointer to an int as parameter and updates value to 98
 * @*n: The int
 *
 * Return: Void
 */
void reset_to_98(int *n)
{
	*n = 98;
	_putchar(n);
	_putchar('\n');
}

