#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: Pointer to string
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	int n;
	int lower[] = [97, 101, 111, 116, 108];
	int upper[] = [65, 69, 79, 84, 76];
	int num[] = [52, 51, 48, 55, 49];

	for (n = 0; n >= 0 && n != '\0'; n++)
	{
		if ((*(s + n) == lower[]) || (*(s + n) == upper[]))
		{
			*(s + n) = num[];
		}
	}
	return (s);
}

