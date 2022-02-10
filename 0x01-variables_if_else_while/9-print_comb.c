#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 separated by comma.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);

		if (m != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

