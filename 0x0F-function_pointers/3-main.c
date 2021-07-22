#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that performs simple operations
 * @argc: number of arguments passed
 * @argv: arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int p, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
		&& argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	p = get_op_func(argv[2])(num1, num2);

	printf("%d\n", p);

	return (0);
}
