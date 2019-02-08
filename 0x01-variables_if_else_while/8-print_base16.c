#include <stdio.h>

/* betty style doc for function maingoes there */

/**
 * main - printing all hexadecimal numbers in lowercase..
 * Return: 0 if success.
*/

int main(void)
{
	int num, ch;

	num = '0';

	while (num <= '9')
	/* base 16 numbers */

	{
		putchar(num);
		num++;
	}
	ch = 'a';

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
