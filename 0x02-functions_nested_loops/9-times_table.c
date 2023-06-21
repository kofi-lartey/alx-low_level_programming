#include "main.h"
/**
 * times_table - print time table of a given number
 *
 * Return: 0
 */

void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int z = 0;

		while (z < 10)
		{
			int y = i * z;

			if (y <= 9)
			{
				_putchar(' ');
				_putchar(y + '0');
			}
			else
			{
				_putchar(y / 10 + '0');
				_putchar(y % 10 + '0');
			}
			if (z != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			z++;
		}
		_putchar('\n');
		i++;
	}
}
