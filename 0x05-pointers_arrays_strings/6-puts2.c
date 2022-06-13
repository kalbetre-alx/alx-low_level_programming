#include "main.h"

/**
 * puts2 - print every other character of a string
 * @s: pointer to the string
 *
 * Return: void
 */

void puts2(char *s)
{
	int offset = 0;

	while (*(s + offset) != '\0')
	{
		if (offset % 2 == 0)
			_putchar(*(s + offset));
		offset++;
	}
	_putchar('\n');
}
