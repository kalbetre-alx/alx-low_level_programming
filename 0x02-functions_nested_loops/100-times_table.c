#include "main.h"

/**
 * print_times_table - prints the times table of a given number
 * @n: number for times table
 *
 * Description: prints the times table of a give number
 * Return: void
 */
void print_times_table(int n)
{
	int row = 0, col = 0, val;
	char c1, c2, c3, c4;

	while (row < n + 1)
	{
		_putchar('0');
		_putchar(',');
		col = 1;
		while (col < n + 1)
		{
			val = row * col;
			c1 = val / 1000 == 0 ? ' ' : val / 1000 + '0';
			c2 = (val / 100) % 10 == 0 && c1 == ' ' ? ' ' : (val / 100) % 10 + '0';
			c3 = (val / 10) % 10 == 0 && c2 == ' ' ? ' ' : (val / 10) % 10 + '0';
			c4 = val % 10 + '0';

			_putchar(c1);
			_putchar(c2);
			_putchar(c3);
			_putchar(c4);

			if (col < n)
				_putchar(',');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
