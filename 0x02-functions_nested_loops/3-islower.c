#include "main.h"
/**
 * _islower - checks lower case alphabet
 * @c: The character to check
 * Return: either 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
