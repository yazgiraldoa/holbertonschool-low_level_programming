#include "holberton.h"

/**
 * print_last_digit - program that prints the
 * last digit of a number
 *
 * @n: parameter to be evaluated
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int j = n % 10;

	if (j < 0)
	{
		j = j * (-1);
	}

	_putchar(j + '0');

	return (j);
}
