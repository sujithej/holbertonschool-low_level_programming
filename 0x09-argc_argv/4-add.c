#include "holberton.h"
#include <stdlib.h>

/**
 * is_digit - checks for a digit.
 * @s: string.
 * Return: 1 if true, 0 if fail.
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] < '0' || s[i] > '9') && !(i == 0 && s[i] == '-'))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - starting point.
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
