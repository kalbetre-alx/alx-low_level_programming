#include "main.h"

/**
 * print_number - prints an integer number
 * @n: the number
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int pos_n;
	short digit, tens = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		pos_n = n < 0 ? -1 * n : n;
		if (n < 0)
			_putchar('-');

		while ((pos_n / tens > 0))
			tens *= 10;
		tens /= 10;

		while (tens >= 1)
		{
			digit = pos_n / tens;
			pos_n = pos_n - digit * tens;
			tens /= 10;
			_putchar(digit + '0');
		}
	}
}
