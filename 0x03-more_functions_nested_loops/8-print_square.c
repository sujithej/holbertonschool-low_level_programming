#include "holberton.h"

/**
 * print_square - printing #.
 * @size: size is the number of times # has to print.
 * Return: 0 if success.
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
