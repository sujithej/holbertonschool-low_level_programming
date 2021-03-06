#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a char for the length.
 * Return: i.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: string to make a copy of.
 *
 * Return: NULL if size = 0, pointer to the copied string  or NULL if it fails.
 */
char *_strdup(char *str)
{
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
		len++;

	char *a = malloc(len * sizeof(char));

	if (!a)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}

	return (a);
}

