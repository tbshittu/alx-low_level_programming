#include "main.h"

/**
 * _abs - Shows the absolutevalue of an integer
 * @c: the integer whose absolute value is gotten
 * Return: absolute value of number or zero
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
