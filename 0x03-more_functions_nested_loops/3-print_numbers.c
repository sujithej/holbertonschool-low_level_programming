#include "holberton.h"
#include "unistd.h"

/**
 * print_numbers - checks the character is digit.
 * Return: 0 if success.
 */
void print_numbers(void)
{
	int i;
	/* single digits of base 10 values */
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
