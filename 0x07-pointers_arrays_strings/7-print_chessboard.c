#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @: Pointer to chessboard
 *
 * Return: Void
 */
void print_chesssboard(char (*a)[8])
{
	int n;

	for (n = 0; n < *(a + n); n++)
	{
		if (*(a + n) == '\'' || *(a + n) == ',')
		{
			break;
		}
		else
		{
			return (a + n);
		}
	}
}

