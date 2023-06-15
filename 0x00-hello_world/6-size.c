#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;
	int i;
	float f;
	long long int h;
	long int y;

	printf("Size of char: %lu byte(s)\n", sizeof(c));
	printf("Size of int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(i));
	printf("Size of long long int: %lu byte(s)\n", sizeof(h));
	printf("Size of float: %lu byte(s)\n", sizeof(y));
	return (0);
}
