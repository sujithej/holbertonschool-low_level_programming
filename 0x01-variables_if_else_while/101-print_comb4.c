#include <stdio.h>

/* betty style doc for function maingoes there */

/**
 * main - printing all numbers from 00 to 99..
 * Return: 0 if success.
*/

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = (i + 1); j <= '9'; j++)
		{
			for (k = (j + 1); k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != '7' || j != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
