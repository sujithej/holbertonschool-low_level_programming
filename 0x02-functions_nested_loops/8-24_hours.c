#include "holberton.h"

/**
 * jack_bauer - printing every minute of the day of Jack Bauer.
 * Return: o if success.
 * on error,-1 is returned.
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
		_putchar(':');
		_putchar('0' + (j / 10));
		_putchar('0' + (j % 10));
		_putchar('\n');
		}
	}
	return;

}

