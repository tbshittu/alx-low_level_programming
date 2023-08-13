#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers
 *              in base 10, starting from 0, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}

