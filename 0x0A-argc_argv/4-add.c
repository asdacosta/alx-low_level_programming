#include <stdio.h>
#include <stlib.h>

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
	int n, sum = 0;

	if (argc > 2)
	{
		for (n = 0; n < argc; n++)
		{
			sum += atoi(argv[n]);
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		return (0);
		printf("\n");
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}

