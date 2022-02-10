#include <stdio.h>
/**
 * main - Prints alphabet in lowercase then in uppercase followed by new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
		putchar(m);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
	putchar('\n');

	return (0);
}

