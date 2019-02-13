#include "holberton.h"

/**
 * times_table - printing 9 times tables.
 *
 * Return: 0 if success.
*/

void times_table(void)
{
	int i, j, temp;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			temp = i * j;
			if (temp < 10)
			{
				if (temp != 0)
				{
					_putchar(' ');
				}
				_putchar('0' + temp);
			}
			else
			{
				_putchar('0' + (temp / 10));
				_putchar('0' + (temp % 10));
			}
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}

		}
		putchar('\n');
	}
}
