#include "main.h"

/**
 * _isdigit - checks for a digit from 0-9
 * @c: numbers to check
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
