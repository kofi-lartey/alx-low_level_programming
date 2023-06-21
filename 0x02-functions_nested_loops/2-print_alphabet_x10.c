#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in 10 lines
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char r;

		for (r = 'a'; r <= 'z'; r++)
		{
			_putchar(r);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
