#include <stdio.h>

/**
 * main - Prints name of the program or argument run on command line
 * @argc: Number of programs on command line
 * @argv: Array of programs passed on command line
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}

