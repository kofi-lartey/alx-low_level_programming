#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 00;

	while (i <= 98)
	{
		int j = 01;

		while (j <= 99)
		{
			putchar (i / 10 + '0');
			putchar (i % 10 + '0');
			putchar (' ');
			putchar (j / 10 + '0');
			putchar (j % 10 + '0');

			if (i != 98 || j != 99)
			{
				putchar (',');
				putchar (' ');
			}

			j++;
		}

		i++;
	}

	putchar ('\n');

	return (0);
}
