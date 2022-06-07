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
	int digit = n % 10;

	_putchar(digit + '0');
	return (n);
}
