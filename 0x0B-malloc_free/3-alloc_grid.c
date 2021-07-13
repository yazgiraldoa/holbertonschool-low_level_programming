#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* alloc_grid - function that returns pointer to a 2 dimensional array
* @height: height of the 2d array
* @width: width of the 2d array
* Return: pointer to a 2d array or NULL if failure
*/

int **alloc_grid(int width, int height)
{
	int **array2d;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	array2d = malloc(height * sizeof(int *));

	if (array2d == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array2d[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			if (array2d[i] == NULL)
			{
				for (k = 0; k < width; k++)
					free(array2d[k]);
				free(array2d);
				return (NULL);
			}
			array2d[i][j] = 0;
		}
	}
	return (array2d);
}
