#include "holberton.h"

/**
 * print_diagonal - printing diagonal of spaces and \.
 * @n: n is the number of times # has to print.
 * Return: 0 if success.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
