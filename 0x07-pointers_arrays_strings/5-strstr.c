#include "holberton.h"

/**
* _strstr - function that locates a substring
*
* @haystack: pointer to the original string
* @needle: substring that will be checked
*
* Return: the pointer in first position of coincidence or null
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	if (*needle == '\0')
		return (haystack);

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
