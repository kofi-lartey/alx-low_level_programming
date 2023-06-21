#include "main.h"
/**
 * jack_bauer - song to print h and m
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			putchar('0' + hour / 10);
			putchar('0' + hour % 10);
			putchar(':');
			putchar('0' + minute / 10);
			putchar('0' + minute % 10);
			putchar('\n');
		}
	}
}
