#include "holberton.h"

/**
* cap_string - function that capitalizes all words of a string
*
* @p: string to be capitalized
*
* Return: string capitalized
*/

char *cap_string(char *p)
{
	char s[] = {' ', '\t', '\n', ',', ';', '.', '!',
	'?', '"', '(', ')', '{', '}', '\0'};
	int i = 0, j;

	if (p[0] >= 97 && p[0] <= 122)
		p[0] = p[0] - 32;

	while (p[i])
	{
		j = 0;
		while (s[j])
		{
			if (p[i] == s[j])
			{
				if (p[i + 1] >= 97 && p[i + 1] <= 122)
				{
					p[i + 1] = p[i + 1] - 32;
				}
			}
			j++;
		}
		i++;
	}

	return (p);
}
