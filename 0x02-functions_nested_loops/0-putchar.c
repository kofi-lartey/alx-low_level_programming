#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char m[] = "_putchar\n";
	int i = 0;

	while (m[i] != '\0')
	{
		putchar(m[i]);
		i++;
	}
	return (0);
}
