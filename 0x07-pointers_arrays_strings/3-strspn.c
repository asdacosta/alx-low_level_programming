#include "main.h"

/**
 * _strspn - Gets the length of a prefix of a substring
 * @s: Pointer to initial segment
 * @accept: Pointer to string
 *
 * Return: Number of bytes in the initial segament of 's'
 *	which consist only of bytes from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}

