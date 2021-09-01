#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char alp;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 16) + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}

	putchar('\n');

	return (0);
}

