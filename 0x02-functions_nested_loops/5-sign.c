#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be tested
 *
 * Description: checks if a number is pos, zero or neg and prints
 * 1, 0 or -1
 * Return: 1 if n is a postive, 0 if n is zero or -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
