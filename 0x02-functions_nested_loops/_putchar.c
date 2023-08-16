#include <unistd.h>

/**
 * _putchar - Writes the character b to stdout
 * @b: The character to print
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}
