#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup- function that returns pointer to newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: size of the array.
* Return: pointer to duplicated string, or NULL if it fails or pointer is NULL
*/

char *_strdup(char *str)
{
	unsigned long int i = 0;
	char *duplicated;

	if (str == NULL)
		return (NULL);

	duplicated = malloc((strlen(str) + 1) * sizeof(char));

	if (duplicated == NULL)
		return (NULL);

	while (i <= (strlen(str) + 1))
	{
		duplicated[i] = str[i];
		i++;
	}
	return (duplicated);
}
