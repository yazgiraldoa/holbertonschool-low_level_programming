#include "holberton.h"
#include <stdio.h>
/**
* rev_string - function that reverses a string
*
* @s: pointer
*/

void rev_string(char *s)
{
	int i, j = 0, k = 0;
	char aux[1024];

	for (i = 0; s[i] != '\0'; i++)
	{	}

	i--;

	for (; i >= 0; i--)
	{
		aux[k] = s[i];
		k++;
	}

	while (s[j] != '\0')
	{
		s[j] = aux[j];
		j++;
	}
}
