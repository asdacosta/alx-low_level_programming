#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 from 0, followed by new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	putchar('\n');

	return (0);
}

