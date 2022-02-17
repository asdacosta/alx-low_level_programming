#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: Pointer to the string
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int n = 0, m;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + n) != '\0')
	{
		for (m = 0; m <= 52; m++)
		{
			if (*(s + n) == alp[m])
			{
				*(s + n) = rot13[m];
				break;
			}
		}
		n++;
	}
	return (0);
}

