#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenantes two strings
 * @dest: the destination string
 * @src: The source string
 * Return: A pointer to the resulting string destination
 */
char *_strcat(char *dest, char *src)
{
	int lend = 0, i;

	while (dest[lend])
	{
		lend++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[lend] = src[i];
		lend++;
	}
	dest[lend] = '\0';
	return (dest);
}
