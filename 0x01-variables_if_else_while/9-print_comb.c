#include <stdio.h>

/* betty style doc for function maingoes there */

/**
 * main - printing all hexadecimal numbers in lowercase..
 * Return: 0 if success.
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
