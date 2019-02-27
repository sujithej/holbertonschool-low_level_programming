#include "holberton.h"

/**
 * factorial - n! = n*(n-1).
 * @n: n is a number.
 * Return: returns 0 and -1 if n is less than or equal to 0 else returns n!.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
