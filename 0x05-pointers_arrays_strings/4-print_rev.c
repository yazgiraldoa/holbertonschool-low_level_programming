#include "holberton.h"

/**
* print_rev - function that prints a string in reverse
*
* @s: pointer
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{	}

	i--;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
