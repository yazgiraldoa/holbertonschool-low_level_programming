#include <stdio.h>

/**
 * main - Program that prints the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 97;

	while (l <= 122)
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);

}
