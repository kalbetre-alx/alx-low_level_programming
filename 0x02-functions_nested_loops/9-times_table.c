#include "main.h"

/**
 * times_table - prints the nine times table
 *
 * Description: prints the the nine times table in a formated way
 * Return: void
 */
void times_table(void)
{
	int row = 0, col = 0, val;

	while (row < 10)
	{
		_putchar('0');
		_putchar(',');

		col = 1;
		while (col < 10)
		{
			val = row * col;
			_putchar(' ');
			if (val < 10)
			{
				_putchar(' ');
				_putchar(val + '0');
			}
			else
			{
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '0');
			}
			if (col < 9)
				_putchar(',');
			col++;
		}
		_putchar('\n');
		row++;
	}
}
