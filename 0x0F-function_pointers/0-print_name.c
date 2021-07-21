#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that prints a name
 * @name: pointer to the name passed by parameter
 * @f: pointer to a function that prints the name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
