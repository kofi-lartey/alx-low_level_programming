#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers to 98
 * @n: a given number to 98
 * Return: 0
 */

void print_to_98(int n)
{
	int z;

	if (n > 98)
	{
		for (z = n; z >= 98; z--)
		{
			printf("%d", z);
			if (z != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for (z = n; z <= 98; z++)
		{
			printf("%d", z);
			if (z != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
