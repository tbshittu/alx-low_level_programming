#include "main.h"

/**
 * factorial - Calculkate the factorial of a given number.
 * @n: The given number to be used.
 * Return: value of factorial of given number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
