#include <stdio.h>

/**
 * main - Program that prints the alphabet
 * without e and q
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 97;

	while (l <= 122)
	{
		if (l == 101 || l == 113)
		{
			l++;
		}

		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);

}
