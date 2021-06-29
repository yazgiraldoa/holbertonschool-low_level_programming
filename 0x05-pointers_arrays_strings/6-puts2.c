#include "holberton.h"

/**
* puts2 - function that prints every other character of a string
*
* @str: pointer
*/

void puts2(char *str)
{
	int i, n = 0;

	for (i = 0; str[i] != '\0'; i++)
	{	}

	i--;

	while (n <= i)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}

		n++;
	}
	_putchar('\n');
}
