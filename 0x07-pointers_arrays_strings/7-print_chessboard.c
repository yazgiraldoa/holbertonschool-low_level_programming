#include "holberton.h"

/**
* print_chessboard - function that prints the chessboard
*
* @a: pointer to the array of rows
*
*/

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar((a[i])[j]);

			if (j == 7)
				_putchar('\n');
			j++;
		}
		i++;
	}
}
