#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long j = i, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", k);
		else if ( i == 1)
			printf("%ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
