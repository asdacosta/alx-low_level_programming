#include <stdio.h>
#include <stdlib.h>

/**
 * add - Adds positive numbers after the argument.
 * @argc: Number of command line arguments
 * @argv: Array to command line arguments
 *
 * Return: 0 if no number is passed to program, and 1 if
 *	arg is a symbol.
 */
int main(int argc, char *argv[])
{
	int n, m, sum = 0;

	if (argc > 2)
	{
		for (n = 1; n < argc; n++)
		{
			sum += atoi(argv[n]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			if (argv[m] >= 97 && argv[m] <= 122)
			{
				printf("Error\n");
			}
		}
	}
	return (1);
}

