#include "holberton.h"
#include <stddef.h>

/**
* *_strchr - function that locates a character in a string
*
* @s: string
* @c: character to locate
*
* Return: pointer to the character located or NULL if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
