#include "main.h"

/**
 * _print_rev_recursion - Prints the reverse of a string
 * @s: the string to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
