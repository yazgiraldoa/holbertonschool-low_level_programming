#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to a function that takes an array
 * Return: index of first element for which cmp function does not return 0,
 * -1 if size <= 0 or If no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
			return (i);
	}

	return (-1);
}
