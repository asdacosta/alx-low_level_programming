#include <stdio.h>

/**
 * main - Prints numbers of base 16 "0123456789abcdef"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	m %= 16;
	for (m = '0'; m <= '9'; m++)
		putchar(m);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');

	return (0);
}

