#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the two diagonal sums of a square matrix
 * @a: 2d int array
 * @size: the size*size of square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + size * i + i);
		sum2 += *(a + size * i + size - 1 - i);
	}
	printf("%d, %d\n", sum1, sum2);
}
