#include <stdio.h>

/* betty style doc for function maingoes there */

/**
 * main - printing all single digit numbers of base 10.
 * Return: 0 if success.
*/

int main(void)
{
	int i = '0';

	while (i <= '9')
	/* single digits of base 10 values */

	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
