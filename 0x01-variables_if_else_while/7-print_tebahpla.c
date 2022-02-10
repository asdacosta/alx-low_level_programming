#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);
	putchar('\n');

	return (0);
}

