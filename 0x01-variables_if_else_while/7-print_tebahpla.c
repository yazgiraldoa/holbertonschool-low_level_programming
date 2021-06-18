#include <stdio.h>

/**
 * main - Program that prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 122;

	while (l >= 97)
	{
		putchar(l);
		l--;
	}

	putchar('\n');

	return (0);

}
