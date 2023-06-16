#include <stdio.h>

/**
 * main - Entry point (void)
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar(' ');

	return (0);
}
