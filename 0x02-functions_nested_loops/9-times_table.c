#include "holberton.h"

/**
 * times_table - function that prints the 9 times table,
 * starting with 0.
 *
 * Return: nothing.
 */

void times_table(void)
{	int i = 0, j, k;
	while (i <= 9)
	{	j = 0;
		while (j <= 9)
		{	k = i * j;
			if (i == 0)
			{	_putchar(k + '0');
				if (j < 9)
				{	_putchar(',');
					_putchar(' ');
					_putchar(' '); } }
			if (k >= 10)
			{	_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0'); }
			else if (k <= 9 && k >= 1)
			{	_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0'); }
			else if (k == 0 && i != 0)
			{ _putchar(k + '0'); }
			j++; }
		_putchar('\n');
		i++; }
}
