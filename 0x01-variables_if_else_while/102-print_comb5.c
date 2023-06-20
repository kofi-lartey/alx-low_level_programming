#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i <= 98)
	{
		int j = 0;

		while (j <= 9)
		{
			int y = 0;

			while (y <= 9)
			{	putchar (i / 10 + '0');
				putchar (i % 10 + '0');
				putchar (' ');
				putchar (j / 10 + '0');
				putchar (y + '0');

				if (i != 98 || j != 9 || y != 9)
				{
					putchar (',');
					putchar (' ');
				}

				y++;
			}

			j++;
		}

		i++;
	}

	putchar ('\n');
	return (0);
}
