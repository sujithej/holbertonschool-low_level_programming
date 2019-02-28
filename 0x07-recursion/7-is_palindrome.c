#include "holberton.h"

/**
 * strlen_1 - gives the length of the string.
 * @s: sting.
 * Return: returns length of the string.
 */
int strlen_1(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_1(s + 1));
}

/**
 * check_is_palindrome - checkes whether a num is palindrome(ex:15351)
 * @s: string
 * @start: start of string
 * @end: end of string
 * Return: 0 if start and end of the string is not equal.
 * 1 if start is equal to end.
 * palindrome be incrementing start and decrementing end.
 */
int check_is_palindrome(char *s, int start, int end)
{
	if (s[start] != s[end])
	{
		return (0);
	}
	else if (start >= end)
	{
		return (1);
	}
	else
	{
		return (check_is_palindrome(s, ++start, --end));
	}
}

/**
 * is_palindrome - checkes whether a num is palindrome(ex:15351)
 * @s: string
 * Return: 0 if start and end of the string is not equal.
 * 1 if start is equal to end.
 * palindrome be incrementing start and decrementing end.
 */
int is_palindrome(char *s)
{
	int len = strlen_1(s);

	return (check_is_palindrome(s, 0, len - 1));


}
