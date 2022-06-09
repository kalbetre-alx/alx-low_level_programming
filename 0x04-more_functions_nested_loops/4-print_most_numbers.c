#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 excpet 2 and 4 followed by new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
