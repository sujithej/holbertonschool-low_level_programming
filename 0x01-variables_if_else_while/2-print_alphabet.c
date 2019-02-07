#include <stdio.h>

/* betty style doc for function maingoes there */

/**
 * main - printing alphabet in lower case using putchar.
 * Return: 0 if success
 */
int main(void)
{
	char c = 'a';
	/* lowercse alphabet */

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
