#include "holberton.h"
#include <stdio.h>
/**
* *_strncat - function that concatenates two strings - strncat
*
* @dest: destine of the string
* @src: source of the second string
* @n: limit
*
* Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{	}

	for (k = 0; src[k] != '\0'; k++)
	{	}

	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;

		if (j > k)
		{
			break;
		}
	}
	return (dest);
}
