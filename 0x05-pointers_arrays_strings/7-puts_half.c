#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int offset, len = 0;

	while (*(str + len) != '\0')
		len++;

	offset = len / 2 + (len % 2 == 0 ? 0 : 1);
	for (; offset < len; offset++)
		_putchar(*(str + offset));

	_putchar('\n');
}
