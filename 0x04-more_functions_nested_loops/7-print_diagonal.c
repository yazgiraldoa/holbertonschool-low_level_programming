#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal
 * line in the terminal
 *
 * @n: parameter that determines the diagonal
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	char b = 92, i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j == i)
			{
				_putchar(b);
				break;
			}
			else
			{
				_putchar(' ');
			}
		}

		_putchar('\n');
	}

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
