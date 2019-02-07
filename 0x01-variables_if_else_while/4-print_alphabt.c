#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - printing alphabet in lower case using putchar except q and e.
 * Return: 0 if success
 */
int main(void)
{
	char ch = 'a';
	/* lowercse alphabet */

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
