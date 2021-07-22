#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that adds two numbers
 * @a: number 1
 * @b: number 2
 * Return: sum of the numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two numbers
 * @a: number 1
 * @b: number 2
 * Return: subtraction of the numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two numbers
 * @a: number 1
 * @b: number 2
 * Return: multiplication of the numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two numbers
 * @a: number 1
 * @b: number 2
 * Return: division of the numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - function that gets the remainder of a division
* @a: number 1
* @b: number 2
* Return: remainder of the division of the numbers
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
