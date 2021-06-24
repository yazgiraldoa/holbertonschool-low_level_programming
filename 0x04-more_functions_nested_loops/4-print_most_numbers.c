#include "holberton.h"

/**
 * print_most_numbers - Program that prints 0-9 numbers
 * without 2 and 4
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n == 50 || n == 52)
		{
			n++;
		}

		_putchar(n);
		n++;
	}

	_putchar('\n');
}
