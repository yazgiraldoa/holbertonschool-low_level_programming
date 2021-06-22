#include "holberton.h"

/**
 * print_sign - Program that prints the sign of a number
 *
 * @n: parameter in which we will check for a sign
 *
 * Return: 1 if number is positive,
 * 0 if number is zero
 * and -1 if number is negative.
 * 2 is error.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('\n');
	return (2);
}
