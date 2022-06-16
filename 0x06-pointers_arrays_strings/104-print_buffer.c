#include <stdio.h>

/**
 * print_buffer - prints a buffer in a formated way
 * @b: the buffer
 * @size: the size of the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i = 0, j, l = 0, lines, byte_1, byte_2;

	lines = size / 10 + (size % 10 > 0 ? 1 : 0);
	while (l < lines)
	{
		printf("%08x: ", l * 10);

		for (j = 0; j < 5; j++)
		{
			byte_1 = i < size ? b[i++] : 0;
			byte_2 = i < size ? b[i++] : 0;

			if (byte_1 == 0 && byte_2 == 0 && i >= size)
				printf("     ", byte_1, byte_2);
			else
				printf("%02x%02x ", byte_1, byte_2);
		}

		for (j = 0; j < 10 && l * 10 + j < size; j++)
		{
			if (isprint(*(b + l * 10 + j)))
				putchar(*(b + l * 10 + j));
			else
				putchar('.');
		}

		putchar('\n');
		l++;
	}
}
