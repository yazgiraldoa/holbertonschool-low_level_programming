#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to a function that takes an array as paramenter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && array != NULL)
	{
		unsigned long int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
