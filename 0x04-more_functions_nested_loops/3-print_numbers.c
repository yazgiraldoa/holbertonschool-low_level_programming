#include "holberton.h"

/**
 * print_numbers - program that prints numbers
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int n = 48;

	while (n >= 48 && n <= 57)
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
}
