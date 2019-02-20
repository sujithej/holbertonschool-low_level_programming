#include "holberton.h"

/**
 * strlen_1 - gives the length of a string.
 * @s: string.
 * Return: 0 if success.
 */
int strlen_1(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);

}

/**
 * puts_half - gives the length of a string.
 * @str: string.
 * Return: 0 if success.
 */
void puts_half(char *str)
{
	int i;
	int len = strlen_1(str);
	int n = ((len - 1) / 2) + 1;

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
