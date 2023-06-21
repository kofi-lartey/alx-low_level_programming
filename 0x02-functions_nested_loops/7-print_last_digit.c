#include "main.h"
/**
 * print_last_digit - print last number
 * @r: a number
 * Return: always 0
 */

int print_last_digit(int r)
{
	int c = r % 10;

	if (c < 0)
	{
		c *= -1;
	}

	_putchar('0' + c);
	return (c);
}
