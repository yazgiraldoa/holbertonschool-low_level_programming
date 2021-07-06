#include "holberton.h"

/**
* _strspn - function that gets the length of a prefix substring
*
* @s: pointer to the original string
* @accept: the characters that will sum to the length
*
* Return: length
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, found;
	unsigned int length = 0;

	while (s[i])
	{
		j = 0;
		found = 0;
		while (accept[j] && found == 0)
		{
			if (s[i] == accept[j])
			{
				length += 1;
				found = 1;
			}
			j++;
		}

		if (found == 0)
			return (length);
		i++;
	}
	return (length);
}
