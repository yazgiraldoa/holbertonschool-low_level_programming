#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array, using malloc
* @nmemb: number of elements of the array
* @size: size of each element of the array
* Return: pointer to the array or NULL if failure
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (size == 0 || nmemb == 0)
		return (0);

	p = malloc(nmemb * size);

	if (p == 0)
		return (0);

	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
