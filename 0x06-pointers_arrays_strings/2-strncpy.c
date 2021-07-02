#include "holberton.h"

/**
* *_strncpy - Write a function that copies a string
*
* @dest: destine of the string copied
* @src: string to be copied
* @n: limit
*
* Return: string copied
*/

char *_strncpy(char *dest, char *src, int n)
{

	int l, j, k = 0;

	for (l = 0; src[l] != '\0'; l++)
	{	}

	for (j = 0; j < n; j++)
	{
		if (j >= l)
		{
			dest[j] = '\0';
		}
		else
		{
			dest[k] = src[j];
			k++;
		}
	}
	return (dest);
}
