#include "holberton.h"

/**
* isSeperator - checks if it is a seperator.
* @c: character to check. 
* Return: capitalized string.
*/

int isSeparator(char *c)
{
	int i;
	char sep[] = {' ', '\t', '\n', ',', ';', '.',
	       	'!', '?', '"', '(', ')', '{', '}'};
	
	for (i = 0; i < (int) sizeof(sep); i++)
	{
		if (*c == sep[i])
		{
			return 1;
		}
	}
	return 0;
}
	

/**
* cap_string - capitalize all words in a string.
*@str: string to capitalize
*
* Return: capitalized string.
*/
char *cap_string(char *str)
{
	int i;

	
	if (*str >= 'a' && *str <= 'z')
        {
                *str = *str - 32;
        }

	
	for (i = 1; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && isSeparator(&str[i-1]))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}


