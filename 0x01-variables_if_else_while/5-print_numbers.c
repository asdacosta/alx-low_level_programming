#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 from 0 .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
		printf("%d", m);
	putchar('\n');

	return (0);
}

