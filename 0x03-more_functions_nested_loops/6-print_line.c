#include "holberton.h"

/**
 * print_line - prints line.
 * @n: n is the number of times the line has to print.
 * Return: 0 if success.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
