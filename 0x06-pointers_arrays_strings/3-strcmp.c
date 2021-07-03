#include "holberton.h"

/**
* _strcmp - function that compares two strings
*
* @s1: string to compare
* @s2: string to compare
*
* Return: comparation.
*/

int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
		{
			return (s1[k] - s2[k]);
		}
	}
	return (0);
}
