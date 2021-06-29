#include "holberton.h"
#include <stdio.h>

/**
* print_array - function that prints n elements of an array
*
* @a: pointer that points to an array given by parameter
* @n: size of the array given by parameter
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
		printf("\n");
}

