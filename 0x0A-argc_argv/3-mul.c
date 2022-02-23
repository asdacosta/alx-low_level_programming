#include <stdio.h>

/**
 * main - Multiplies the two numbers passed on command line after arg
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n, mul;

	if (argc > 1)
	{
		for (n = 0; n < argc; n++)
		{
			mul = argv[1] * argv[2];
			printf("%d\n", mul);
		}
	}

	return (0);
}

