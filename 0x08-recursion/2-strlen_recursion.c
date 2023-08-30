#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: The string to count.
 *Return: The integer value of the string counted.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
