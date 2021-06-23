#include "holberton.h"

/**
 * jack_bauer - program that prints every minute of a day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes;

	while (hours <= 23)
	{
		minutes = 0;

		while (minutes <= 59)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');

			minutes++;
		}

		hours++;
	}
}
