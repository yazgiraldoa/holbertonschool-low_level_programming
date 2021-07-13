#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_array - function that creates an array of chars
* and initializes it with a specific char.
* @size: size of the array.
* @c: char that will fill the array.
* Return: pointer to the array, or NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
