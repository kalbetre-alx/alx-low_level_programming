#include "main.h"

/**
 * print_number - prints integer number
 * @n: number to be printed
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num, digit;
	double factor = 1;

	num = n > 0 ? n : n * -1;
	if (n < 0)
		_putchar('-');

	while (num / factor >= 10)
		factor *= 10;

	while (factor >= 1)
	{
		digit = num / factor;
		_putchar(digit + '0');
		num = num - digit * factor;
		factor /= 10;
	}
}
