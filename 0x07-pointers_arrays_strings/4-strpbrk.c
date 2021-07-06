#include "holberton.h"

/**
* _strpbrk - function that searches a string for any of a set of bytes
*
* @s: pointer to the original string
* @accept: the characters that will be checked
*
* Return: the pointer or null
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
			j++;
		}
		i++;
	}
	return (0);
}
