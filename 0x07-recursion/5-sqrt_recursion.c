#include "holberton.h"

/**
 * sqrt_recursion_1 - gives square root of num n.
 *f(n)=f(n,i+1)
 * @n: n is a number.
 * @i: i is the number to be raised.
 * Return: returns -1 and i if i*i is greater than
 * or equal to n else (n)^(1/2).
 */
int sqrt_recursion_1(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursion_1(n, i + 1));
}

/**
 * _sqrt_recursion - gives square root of num n.
 * @n: n is a number.
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursion_1(n, 0));
}

