#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int offset = 0, len = 0;
	char temp;

	while (*(s + len) != '\0')
		len++;

	for (offset = 0; offset < len / 2; offset++)
	{
		temp = *(s + offset);
		*(s + offset) = *(s + len - offset - 1);
		*(s + len - offset - 1) = temp;
	}
}
