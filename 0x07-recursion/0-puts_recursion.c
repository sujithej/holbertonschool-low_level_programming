#include "holberton.h"

/**
 * _puts_recursion - printis a string.
 * @s: sting.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{ 
		_putchar(*s);

                _puts_recursion(++s);

	}
	else
		_putchar('\n');
}
