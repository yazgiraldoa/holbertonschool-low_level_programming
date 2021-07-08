#include "holberton.h"

/**
* square_root - function that validates the square root of a number
*
* @n: number to find square root
* @i: possible square root
*
* Return: square root or -1 (not natural)
*/

int square_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i > (n / 2))
		return (-1);

	i++;
	return (square_root(n, i));
}

/**
* _sqrt_recursion - function that returns the natural square root of a number
*
* @n: number to find square root
*
* Return: square root or -1 (not natural)
*/

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);

	return (square_root(n, 2));
}
