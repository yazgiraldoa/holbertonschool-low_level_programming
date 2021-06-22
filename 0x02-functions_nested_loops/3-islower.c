#include "holberton.h"

/**
 * _islower - program that ckecks for
 * lowercase characters
 *
 * @c: parameter in which we will check for lowercase
 *
 * Return: 1 is lowercase, 1 is other
 */

int _islower(int c)
{

	while (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
