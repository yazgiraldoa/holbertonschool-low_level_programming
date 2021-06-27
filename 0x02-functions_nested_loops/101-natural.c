#include <stdio.h>

/**
* main - prints the sum of all multiples of
* 3 and 5 beow 1024
*
* Return: 0 success
*/

int main(void)
{
	int i, m;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			m = i + m;
	}

	printf("%d\n", m);
	return (0);
}
