#include "holberton.h"

/**
 * strchr_1 - Copies from src to dest
 * @c: character c to be located for.
 * @s: pointer to an array.
 * Return: returns s.
 */
char strchr_1(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (1);

	}
	return (0);
}

/**
 * _strspn - to find length of prefix substring
 * @s: string
 * @accept: number of bytes
 * Return: length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] && strchr_1(accept, s[i]); i++)
		;
	return (i);

}
