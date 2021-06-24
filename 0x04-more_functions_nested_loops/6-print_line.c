#include "holberton.h"

/**
 * print_line - function that draws a straight
 * line in the terminal
 *
 * @n: parameter that determines how many
 * draws should be printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	char u = 95, i;

	for (i = 1; i <= n; i++)
	{
		_putchar(u);
	}

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
