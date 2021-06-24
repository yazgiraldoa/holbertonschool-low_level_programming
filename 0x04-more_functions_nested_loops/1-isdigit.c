#include "holberton.h"

/**
 * _isdigit - program that ckecks for
 * digits 0-9
 *
 * @c: parameter in which we will check for digits
 *
 * Return: 1 is a digit, 1 is other
 */

int _isdigit(int c)
{
	while (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
