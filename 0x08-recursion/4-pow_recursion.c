#include "holberton.h"

/**
* _pow_recursion - function that returns value of x raised to the power of y
*
* @x: base of the logarithm
* @y: exponent
*
* Return: result of the exponentiation or
* -1 if exponent is lower than 0 (error)
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);
	y--;
	return (x * _pow_recursion(x, y));
}

