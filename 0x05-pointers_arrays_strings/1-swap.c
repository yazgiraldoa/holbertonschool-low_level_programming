#include "holberton.h"

/**
* swap_int - function that swaps the values of two integers
*
* @a: first pointer
* @b: second pointer
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;

}
