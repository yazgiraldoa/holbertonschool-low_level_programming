#include "search_algos.h"

/**
 * print_array - function that prints a given scope of an array
 * @array: array to print
 * @first: index of the first element in array to print
 * @last: index of the last element in array to print
 */

void print_array(int *array, int first, int last)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		printf("%d", array[i]);
		if (i < last)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return:  index where value is located or -1 if error
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle = 0;

	while (left <= right)
	{
		print_array(array, left, right);

		middle = (int)((left + right) / 2);

		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}

