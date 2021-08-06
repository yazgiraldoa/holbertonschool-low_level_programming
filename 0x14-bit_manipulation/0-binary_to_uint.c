#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer to a binary number
 * Return: number in decimal or 0 if b is NULL or it's not a binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j, digit, decimal = 0;
	int i;

	if  (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
	}
	i--;

	for (j = 0; i >= 0 ; i--, j++)
	{
		digit = b[i] - 48;
		decimal += digit << j;
	}

	return (decimal);
}
