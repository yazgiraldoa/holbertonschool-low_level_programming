#include "holberton.h"

/**
 * *leet - encodes a string into 1337.
 *
 * @l: string to encode
 *
 * Return: string enconded
 */

char *leet(char *l)
{
	char letter[] = {"aAeEoOtTlL"};
	char leet[] = {"4433007711"};
	int i, j;

	for (i = 0; l[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (l[i] == letter[j])
				l[i] = leet[j];
		}
	}
	return (l);
}
