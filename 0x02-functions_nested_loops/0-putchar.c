#include "main.h"

/**
 * main - Prints _putchar followed by a new line.
 *
 * Return: Always 9 (Success)
 */
	int main(void)
{
	char m[] = "_putchar\n";
	int n = 0;

	while (m[n])
	{
		_putchar(m[n]);
		n++;
	}

	return (0);
}

