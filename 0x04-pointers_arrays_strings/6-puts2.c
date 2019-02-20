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
 * puts2 - prints every other character
 * @str: the string to print
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int len = strlen_1(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
