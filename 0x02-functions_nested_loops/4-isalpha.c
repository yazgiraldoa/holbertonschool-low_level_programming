#include "holberton.h"

/**
 * _isalpha - program that ckecks for
 * lowercase characters
 *
 * @c: parameter in which we will check for lowercase
 *
 * Return: 1 is lower or uppercase, 1 is other
 */

int _isalpha(int c)
{

	while (c >= 97 && c <= 122)
	{
		return (1);
	}

	while (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
