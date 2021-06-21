#include <stdio.h>

/**
 * main - Program that prints from 0 to 9 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n < '9')
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');
	return (0);

}
