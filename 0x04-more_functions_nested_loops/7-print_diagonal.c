#include "main.h"

/**
 * print_line - Draws a straight line of underscores in the terminal
 * @n: The number of times the character '_' should be printed
 */
void print_line(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = o, y < x; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
