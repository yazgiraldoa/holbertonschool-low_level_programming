#include "holberton.h"

/**
 * _isupper - program that ckecks for
 * uppecase characters
 *
 * @c: parameter in which we will check for uppercase
 *
 * Return: 1 is uppercase, 0 is other
 */

int _isupper(int c)
{
	while (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
