#include "main.h"

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of
 *	the string str.
 * @str: Pointer to a string
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient
 *	memory was available.
 */
char *_strdup(char *str)
{
	char **strcp;
	int n;

	if (str == NULL)
		return (NULL);

	strcp = malloc(sizeof(str) * 10);

	for (n = 0; str[n] != '\0'; n++)
	{
		strcp = str[n];
	}
	return (strcp);
}

