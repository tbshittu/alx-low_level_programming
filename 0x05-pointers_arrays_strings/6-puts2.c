#include "main.h"

/**
 * puts2 - Prints everything other character of a string
 * @str: The string to be treated
 */
void puts2(char *str)
{
	int i;
	int j;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
