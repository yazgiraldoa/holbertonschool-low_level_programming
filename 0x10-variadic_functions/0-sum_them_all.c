#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments passed
 * @...: arguments
 * Return: 0 if n == 0, or the sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (sum);
}
