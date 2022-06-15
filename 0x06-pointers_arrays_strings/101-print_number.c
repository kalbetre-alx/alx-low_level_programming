#include "main.h"

/**
 * print_number - prints an integer number
 * @n: the number
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int pos_n, digit;
	double factor = 1;

	pos_n = n < 0 ? -1 * n : n;
	if (n < 0)
		_putchar('-');

	while ((pos_n / factor >= 10))
		factor *= 10;

	while (factor >= 1)
	{
		digit = pos_n / factor;
		pos_n = pos_n - digit * factor;
		factor /= 10;
		_putchar(digit + '0');
	}
}
