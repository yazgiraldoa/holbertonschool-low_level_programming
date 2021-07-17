#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
* array_range - function that creates an array of integers
* contain all the values from min (included) to max (included),
* ordered from min to max
* @min: minimum value
* @max: maximum value
* Return: pointer to the array or NULL if failure
*/

int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
