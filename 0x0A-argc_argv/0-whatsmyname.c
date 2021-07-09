#include "holberton.h"
#include <stdio.h>

/**
* main - program that prints its name
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 is success
*/

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
