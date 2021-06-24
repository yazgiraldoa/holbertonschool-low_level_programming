#include "holberton.h"

/**
 * print_square - function that prints a square
 *
 * @size: parameter that determines the size
 * of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	char s = 35;
	int i = 1, j;

	while (i <= size)
	{
		j = 1;

		while (j <= size)
		{
			_putchar(s);
			j++;
		}

		_putchar('\n');
		i++;
	}

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
}
