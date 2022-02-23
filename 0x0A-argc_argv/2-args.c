#include <stdio.h>

/**
 * main - Prints all argyments passed on command line
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Alway 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	
	return (0);
}

