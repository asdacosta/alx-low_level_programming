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

	for (n = 0; n >= 0 && n != '\0'; n++)
	{
		if ((*(s + n) == 'a') || (*(s + n) == 'A'))
		{
			*(s + n) = '4';
		}
		else if ((*(s + n) == 'e') || (*(s + n) == 'E'))
		{
			*(s + n) = '3';
		}
		else if ((*(s + n) == 'o') || (*(s + n) == 'O'))
		{
			*(s + n) = '0';
		}
		else if ((*(s + n) == 't') || (*(s + n) == 'T'))
		{
			*(s + n) = '7';
		}
		else if ((*(s + n) == 'l') || (*(s + n) == 'L'))
		{
			*(s + n) = '1';
		}
	}
	return (s);
}

