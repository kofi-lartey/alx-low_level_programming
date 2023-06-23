#include "main.h"

/**
 * print_triangle - print triangles
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row;

		for (row = 1; row <= size; row++)
		{
			int spaces, hashes;

			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
