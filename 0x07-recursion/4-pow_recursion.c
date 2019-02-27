#include "holberton.h"

/**
 * _pow_recursion - gives the value of x, times y.
 *f()=x*f(x,y-1)
 * @x: x is a number.
 * @y: y is the power.
 * Return: returns -1 and 1 if y is less than or equal to 0 else returns x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
