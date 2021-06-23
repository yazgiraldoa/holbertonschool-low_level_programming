#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all
 * natural numbers from n to 98
 *
 * @n: parameter to be evaluated
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d", n);

		printf("\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", n);

		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}

}
