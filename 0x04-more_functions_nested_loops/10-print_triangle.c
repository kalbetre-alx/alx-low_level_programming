#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, offset, hash;

	if (size <= 0)
		_putchar('\n');

	for (row = 1; row <= size; row++)
	{
		for (offset = 1; offset <= size - row; offset++)
			_putchar(' ');
		for (hash = 1; hash <= row; hash++)
			_putchar('#');
		_putchar('\n');
	}
}
