#include "holberton.h"

/**
 * _abs - program that prints the absolute
 * value of an integer.
 *
 * @n: parameter to be evaluated
 *
 * Return: parameter in absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}

	return (n);

}
