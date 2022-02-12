#include "main.h"

/**
 * print_last_digit - Prints last digit of number
 * @n: Number to obtain last digit
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if ((n >= -9) && (n <=9))
		_putchar(n);
	else
		return (m);
}

