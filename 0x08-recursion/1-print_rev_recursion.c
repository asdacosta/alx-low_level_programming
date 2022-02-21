#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: Pointer to string
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
		break;
	else
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
}

