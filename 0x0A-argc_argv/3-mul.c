#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - program that multiplies two numbers
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 is success
*/

int main(int argc, char *argv[])
{
	int multiplication, num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	multiplication = num1 * num2;
	printf("%d\n", multiplication);
	return (0);
}
