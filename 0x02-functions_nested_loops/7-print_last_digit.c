#include "main.h"

/**
 * print_last_digit - Prints last digit of number
 * @n: Number to obtain last digit
 *
 * Return: Last digit of number
 */
int print_last_digit(int n)
{
	if ((n >= -9) && (n <=9))
			return (n);
	else if ((n < -9) && (n > 9))
			return (n[-1]);
}

