#include "holberton.h"

/**
 * reverse_array - prints the string in reverse order.
 * @n: till n variables.
 * @a: integer array
 * Return: 0 if success.
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
