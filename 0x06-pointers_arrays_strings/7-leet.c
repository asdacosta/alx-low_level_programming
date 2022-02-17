#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: Pointer to string
 *
 * Return: Encoded string
 */
char *leet(char *s)
{
	int n = 0, m;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*(s + n) != '\0')
	{
		for (m = 0; m < 5; m++)
		{
			if ((*(s + n) == lower[m]) || (*(s + n) == upper[m]))
			{
				*(s + n) = num[m];
				break;
			}
		}
		n++;
	}
	return (s);
}

