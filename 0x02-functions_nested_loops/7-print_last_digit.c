#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: given number
 *
 * Description: computs the last digit using modulo
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int abs_n, digit;

	abs_n = n > 0 ? n : n * -1;
	digit = abs_n % 10;
	_putchar(digit + '0');
	return (digit);
}
