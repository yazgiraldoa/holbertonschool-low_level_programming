#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that adds positive numbers
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 is success or 1 is error
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > 48 && *argv[i] < 57)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
