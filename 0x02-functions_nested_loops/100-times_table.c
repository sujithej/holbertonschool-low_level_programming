#include "holberton.h"

/**
 * print_integer - prints the integer
 * @temp: integer input
 * @j: column printing
 * Return: 0 if success.
*/
void print_integer(int temp, int j)
{
	if (temp < 10)
	{
		if (j != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + temp);
	}
	else if (temp < 100)
	{
		_putchar(' ');
		_putchar('0' + (temp / 10));
		_putchar('0' + (temp % 10));
	}
	else
	{
		_putchar('0' + (temp / 100));
		_putchar('0' + ((temp % 100) / 10));
		_putchar('0' + (temp % 10));
	}
}

/**
 * print_times_table - printing n times tables.
 * @n: integer input
 * Return: 0 if success.
*/
void print_times_table(int n)
{
	int i, j, temp;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			temp = i * j;
			print_integer(temp, j);
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
