#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: line length
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int line, offset;

	if (n <= 0)
		_putchar('\n');

	line = 1;
	while (line <= n)
	{
		offset = 0;
		while (offset < line - 1)
		{
			_putchar(' ');
			offset++;
		}
		_putchar('\\');
		_putchar('\n');
		line++;
	}
}
