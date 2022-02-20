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

	for (n = 0; *(a + n) != '\0'; n++)
	{
		if (*(a + n) == 39 || *(a + n) == 44)
		{
			break;
		}
		else
		{
			return (a + n);
		}
	}
}

