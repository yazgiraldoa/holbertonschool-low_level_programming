#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
* string_nconcat - function that concatenates two strings
* @s1: string 1
* @s2: string 2
* @n: limit of characters to concatenate from s2
* Return: pointer to the concateneted string or NULL if failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{	unsigned long int count1 =  0, count2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	if (n < strlen(s2))
	{	concat = malloc((strlen(s1) + n + 1) * sizeof(char));
		if (concat == NULL)
			return (NULL);
		for (count1 = 0; count1 < strlen(s1); count1++)
			concat[count1] = s1[count1];
		for (count2 = 0; count2 < n; count2++)
		{	concat[count1] = s2[count2];
			count1++;	}
		concat[count1] = '\0';	}
	if (n >= strlen(s2))
	{	concat = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
		if (concat == NULL)
			return (NULL);
		for (count1 = 0; count1 < strlen(s1); count1++)
			concat[count1] = s1[count1];
		for (count2 = 0; count2 < strlen(s2); count2++)
		{	concat[count1] = s2[count2];
			count1++;	}
		concat[count1] = '\0';
	}
	return (concat);
}
