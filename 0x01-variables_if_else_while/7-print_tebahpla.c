#include <stdio.h>

/* betty style doc for function maingoes there */

/**
 * main - printing alphabet in lower case using putchar.
 * Return: 0 if success
 */
int main(void)
{
	char ch = 'z';
	/* lowercse alphabet */

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
