#include <stdio.h>
/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to check
 *
 * Return: 1 if c is a letter and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else 
		return (0);
}

