#include "holberton.h"

/**
 * wildcmp - compares two strings lexicographically
 * @s1: the first string
 * @s2: the second string, can contain wildcard
 *
 * Return: 1 if identical, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
			return (*s2 == '\0');
}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
