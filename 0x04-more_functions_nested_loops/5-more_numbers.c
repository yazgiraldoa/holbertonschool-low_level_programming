#include "holberton.h"

/**
 * more_numbers - fuction that prints 10 times
 * the numbers 0-14
 *
 *Return: nothing.
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			if (j >= 0)
			{
				if (j > 9)
				{
					_putchar((j / 10) + '0');
				}

				_putchar((j % 10) + '0');
			}

			j++;
		}

		_putchar('\n');
		i++;
	}
}
