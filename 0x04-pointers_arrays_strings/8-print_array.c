#include "holberton.h"

/**
 * print_array - printing elements of an array.
 * @a: array.
 * @n: number of elements.
 * Return: 0 if success.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
