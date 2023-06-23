#include "main.h"

/**
 * more_numbers - print 0-14, 10 times
 */

void more_numbers(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		int b;

		for (b = 0; b <= 14; b++)
		{
			{
				if (b == 10 || b == 11 || b == 12 || b == 13 || b == 14)
				{
					if (b > 9 && b <= 14)
					{
						_putchar(b / 10 + '0');
						_putchar(b % 10 + '0');
					}
					continue;
				}
			}
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
