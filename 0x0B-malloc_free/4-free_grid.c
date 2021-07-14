#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - function that frees a 2 dimensional grid previously created
* @grid: function previously created
* @height: height of the previous function
* Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
