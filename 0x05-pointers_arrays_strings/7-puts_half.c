#include "holberton.h"
#include <stdio.h>
/**
* puts_half - function that prints second half of string
*
* @str: pointer
*/

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != 0; i++)
	{	}

	if (i % 2 == 0)
	{
		j = (i / 2);

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j = (i + 1) / 2;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
