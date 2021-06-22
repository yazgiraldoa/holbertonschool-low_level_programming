#include "holberton.h"

/**
 * print_alphabet_x10 - program that prints the alphabet in lowercase
 * ten times
 */

void print_alphabet_x10(void)
{
	int i = 0, alpha;

	while (i < 10)
	{
		alpha = 97;

		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
		i++;

	}
}
