#include "holberton.h"

/**
* _strstr - function that searches a string for any of a set of bytes
*
* @haystack: pointer to the original string
* @needle: the characters that will be checked
*
* Return: the pointer or null
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i])
	{

		if (haystack[i] == needle[j])
		{
			j++;
			if  (needle[j + 1] == '\0')
			{
				haystack = &haystack[i - (j - 1)];
				return (haystack);
			}
		}
		else
		{
			j = 0;
		}

		i++;
	}
	return (0);
}
