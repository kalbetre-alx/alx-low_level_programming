#include "main.h"

/**
 * print_number - prints integer number
 * @n: number to be printed
 *
 * Return: 0
 */

void print_number(int n)
{
	int factor = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (n / factor >= 10)
		factor *= 10;

	while (factor >= 1)
	{
		_putchar(n / factor + '0');
		n = n - (n / factor) * factor;
		factor /= 10;
	}

}
