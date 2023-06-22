#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print time table
 * @n: number to print
 */

void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d\t,", i * j);
		}

		putchar('\n');
	}
}
