#include "main.h"

/**
 * print_binary - prints the binary representation of number
 * @n: the number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n, len = 0;

	if (n == 0)
		_putchar('0');

	while (temp > 0)
	{
		temp = temp >> 1;
		len++;
	}

	while (len > 0)
	{
		_putchar(n >> (len - 1) & 1 ? '1' : '0');
		len--;
	}
}
