#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int n = 50;

	int i;

	unsigned long long fib1 = 1;

	unsigned long long fib2 = 2;

	printf("%llu, %llu, ", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		unsigned long long next_fib = fib1 + fib2;

		printf("%llu, ", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");

	return (0);
}
