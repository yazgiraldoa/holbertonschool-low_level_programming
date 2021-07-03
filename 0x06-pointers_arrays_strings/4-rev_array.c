#include "holberton.h"

/**
* reverse_array - function that reverses the content of an array
*
* @a: integers to reverse
* @n: limit
*
* Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i;
	int k;
	int j = 0;
	int l[1000];

	for (i = 0; i < n; i++)
	{
		l[i] = a[i];
	}
	for (k = n - 1; k >= 0; k--)
	{
		a[j] = l[k];
		j++;
	}
}
