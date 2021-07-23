#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - function that prints strings
 * @separator: string to print between arguments
 * @n: number of arguments
 * @...: arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *argument;
	va_list arg;

	va_start(arg, n);

	while (i < n)
	{
		argument = va_arg(arg, char *);
		if (argument == NULL)
			argument = "(nil)";
		printf("%s", argument);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arg);
}
