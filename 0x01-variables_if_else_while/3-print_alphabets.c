#include <stdio.h>

/* betty style doc for function maingoes there */

/**
 * main - printing alphabet in lower case using putchar.
 * Return: 0 if success
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/* lowercse alphabet */

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
