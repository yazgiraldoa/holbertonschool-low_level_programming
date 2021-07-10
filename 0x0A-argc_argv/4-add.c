#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - program that adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 is success or 1 is error
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *p;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		p = argv[i];

		while (*p)
		{
			if (*p < 48 || *p > 57)
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
			sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
