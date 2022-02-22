#include "main.h"

/**
 * my_name - Prints name of the program run on command line
 * @argc: Number of programs on command line
 * @argv: Program passed on command line
 *
 * Return: Always 0
 */
int my_name(int argc, char *argv[])
{
	printf("%s", argv[0]);

	return (0);
}

