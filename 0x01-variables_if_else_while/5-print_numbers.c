#include <stdio.h>

/* betty style doc for function maingoes there */

/**
 * main - printing all single digit numbers of base 10.
 * Return: 0 if success.
*/

int main(void)
{
	int i;
	/* single digits of base 10 values */
	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
