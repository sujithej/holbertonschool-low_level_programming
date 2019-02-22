#include "holberton.h"

/**
 **rot13 - the string to encode(adding 13 to the letters = rot13 encoding.)
 *@str: the string to be copied
 *Return: the converted string
 */

char *rot13(char *str)
{
	int i, j;
	char actual[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char encoded[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == actual[j])
			{
				str[i] = encoded[j];
				break;
			}
		}
	}
	return (str);
}
