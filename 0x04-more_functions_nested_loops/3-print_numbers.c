#include "main.h"

/**
 * print_numbers - prints 0 to 9 followed by new line
 *
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
