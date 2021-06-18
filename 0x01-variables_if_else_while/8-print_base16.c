#include <stdio.h>

/**
 * main - Program that prints base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	char l = 97;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	for (l = 97; l <= 102; l++)
	{
		putchar(l);
	}
	putchar('\n');

	return (0);

}
