#include "main.h"

/**
 * _pow_recursion - returns the value of x
 * raised to y
 * @x:the value to be exponentiated
 * @y:the value of power
 * Return: the valued of the operation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
