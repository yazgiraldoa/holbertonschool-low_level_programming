#include "holberton.h"

/**
 * *string_toupper - function that changes all lowercase to uppercase.
 *
 * @j: string to change
 *
 * Return: string with all capitals
 */

char *string_toupper(char *j)
{
	int i;

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] >= 97 && j[i] <= 122)
		{
			j[i] = j[i] - 32;
		}
	}
	return (j);
}
