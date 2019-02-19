#include "holberton.h"

/**
 * swap_int - swaps the value of *a and *b.
 * @a: pointer to an int.
 * @b: pointer to an int.
 * Return: 0 if success.
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
