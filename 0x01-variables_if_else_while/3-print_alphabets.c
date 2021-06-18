#include <stdio.h>

/**
 * main - Program that prints the alphabet
 * in lower and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 97;
	char L = 65;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}

	while (L <= 90)
	{
		putchar(L);
		L++;
	}

	putchar('\n');

	return (0);

}
