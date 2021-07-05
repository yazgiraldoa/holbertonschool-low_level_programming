#include "holberton.h"

/**
* *_memcpy - function that copies memory area
*
* @dest: destination of the copied memory
* @src: source of the memory to be copied
* @n: the size of the memory to copy
*
* Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j = 0;

	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}

	return (dest);
}
