#include "holberton.h"

/**
 * _strchr - Copies from src to dest
 * @c: character c to be located for.
 * @s: pointer to an array.
 * Return: returns s.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
		;

	return (s + i);
}

