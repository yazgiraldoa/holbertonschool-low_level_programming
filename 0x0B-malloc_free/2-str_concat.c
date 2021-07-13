#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
* str_concat - function that concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer to the concatenated string or NULL if failure
*/
char *str_concat(char *s1, char *s2)
{
	unsigned long int count1 =  0, count2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	concat = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	while (count1 < strlen(s1))
	{
		concat[count1] = s1[count1];
		count1++;
	}

	while (count2 < strlen(s2) + 1)
	{
		concat[count1] = s2[count2];
		count1++;
		count2++;
	}
	return (concat);
}
