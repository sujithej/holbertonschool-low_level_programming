#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, initialized with a char.
 * @c: character to initialize array.
 * @size: size of the array.
 * Return: NULL if size = 0, pointer to the array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a = malloc(size * sizeof(char));

	if (!size)
	{
		return (NULL);
	}

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	return (a);
}

