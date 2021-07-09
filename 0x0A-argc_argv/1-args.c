#include "holberton.h"
#include <stdio.h>

/**
* main - program that prints the number of arguments passed
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 is success
*/

int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
