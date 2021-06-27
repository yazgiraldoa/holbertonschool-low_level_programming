#include <stdio.h>

/**
* main - function that prints first 50 Fibonacci numbers
*
* Return: 0 success
*/

int main(void)
{
	int i;
	double f, k = 0, j = 1;

	for (i = 0; i < 50; i++)
	{
		f = k + j;
		j = f;
		k = f - k;
		printf("%.f", f);

		if (i < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
