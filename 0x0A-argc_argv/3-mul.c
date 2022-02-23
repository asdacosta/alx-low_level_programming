#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies the two numbers passed on command line after arg
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 1 if program does not have two arguments
 */
int main(int argc, char *argv[])
{
	int n, mul;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}

	return (1);
}

