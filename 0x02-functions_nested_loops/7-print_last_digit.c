#include "holberton.h"

/**
 * print_last_digit - prints last digit of an number.
 * @n: n is an integer.
 * Return: 0 if success
 * last digit of a number is returned.
 */

int print_last_digit(int n)
{
	int temp;

	if (n > 0)
	{
		temp = n % 10;
	}
	else
	{
		temp = -1 * (n % 10);
	}
	_putchar('0' + temp);

	return (temp);
}
