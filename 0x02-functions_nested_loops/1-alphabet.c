#include "holberton.h"

/**
 * print_alphabet - program that prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
