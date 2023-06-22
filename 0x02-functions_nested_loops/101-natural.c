#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int t = 0;
	int n;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			t += n;
		}
	}
	printf("%d\n", t);

	return (0);
}
