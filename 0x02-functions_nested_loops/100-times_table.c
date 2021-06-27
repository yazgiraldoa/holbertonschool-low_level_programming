#include "holberton.h"

/**
 * print_times_table - function that prints n times table
 * @n: parameter that determines length of table
 */

void print_times_table(int n)
{
	int i = 0, j, k, nn;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{	j = 0;
			while (j <= n)
			{	k = i * j;
				if (k <= 9)
					_putchar(k + '0');
				else if (k > 9 && k <= 99)
				{	_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k > 99)
				{	_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}

				nn = i * (j + 1);
				if (j < n)
					next_number(nn);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

/**
 * next_number - function that validates next number
 * to print spaces
 * @s: next number in the multiplication
 */

void next_number(int s)
{
	if (s <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
	else if (s > 9 && s <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else if (s > 99)
	{
		_putchar(',');
		_putchar(' ');
	}
}
