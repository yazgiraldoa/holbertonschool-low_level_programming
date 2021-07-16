#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
* malloc_checked - function that allocates memory using malloc
* @b: parameter for malloc
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
