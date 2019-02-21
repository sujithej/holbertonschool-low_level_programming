#include "holberton.h"

/**
 * _atoi - converts string to an integer.
 * @s: string.
 * Return: 0 if success.
 */
int _atoi(char *s)
{
	int i;
	int sign = 1;
	int flag = 0;
	unsigned int result = 0;

	for (i = 0; *s != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result = sign * result * 10 + (s[i] - '0');
		}
		else if (flag == 1)
		{
			flag = 2;
		}
	}
	if (flag != 2)
	{
		return 0;
	}
	return (result);
}
