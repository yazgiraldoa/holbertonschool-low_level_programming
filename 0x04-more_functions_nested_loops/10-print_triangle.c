#include "holberton.h"

/**
 * print_triangle - function that prints a
 * triangle in the terminal
 *
 * @size: parameter that determines the
 * size of the triangle
 *
 */

void print_triangle(int size)
{
	char b = 35;
	int i, j, k = size - 1;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(b);
				}
			}
			_putchar('\n');
			k--;
		}
	}
}
