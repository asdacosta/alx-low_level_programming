#include <stdio.h>

/**
 * main - Prints alphabets in lowercase except e and q.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
		if ((m != 'e') && (m != 'q'))
			putchar(m);
	putchar('\n');

	return (0);
}

