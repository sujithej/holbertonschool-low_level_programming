#include "holberton.h"

/**
 * prime_number_1 - checks if n is a prime num.
 * @n: n is a number.
 * @i: i starts from 0 to n
 * Return: returns 1 and 0 if n is less than or n%i=0 else returns prime num.
 */
int prime_number_1(int n, int i)
{
	if (n <= i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_number_1(n, i + 1));
}

/**
 * is_prime_number - checks if n is a prime num.
 * @n: n is a number.
 * Return: returns 0 if n is less than 2 else returns prime num.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_number_1(n, 2));
}

