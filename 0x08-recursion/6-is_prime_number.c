#include "holberton.h"

/**
* prime_number - function that validates if a number is prime
*
* @number: number to be validated
* @pivot: possible divisors
*
* Return: 1 if it's prime number, 0 if it's not
*/

int prime_number(int number, int pivot)
{
	pivot--;

	if (number % pivot == 0 && pivot != 1)
		return (0);
	if (pivot == 1)
		return (1);
	return (prime_number(number, pivot));
}

/**
* is_prime_number - unction that returns if the input integer is a prime number
*
* @n: number to be validated
*
* Return: 1 if it's prime number, 0 if it's not
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_number(n, n));
}
