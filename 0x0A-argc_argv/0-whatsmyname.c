#include "main.h"

/**
 * my_name - Prints name of the program or argument run on command line
 * @argc: Number of programs on command line
 * @argv: Array of programs passed on command line
 *
 * Return: Always 0
 */
int my_name(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);

	return (0);
}

