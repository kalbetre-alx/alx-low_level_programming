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
	int i, j, l = 0, lines, ch;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	lines = size / 10 + (size % 10 > 0 ? 1 : 0);
	while (l < lines)
	{
		printf("%08x: ", l * 10);
		j = size - l * 10 < 10 ? size - l * 10 : 10;

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + l * 10 + i));
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}

		for (i = 0; i < j; j++)
		{
			ch = *(b + l * 10 + i);
			if (ch < 32 || ch > 132)
				ch = '.';
			putchar(ch);
		}

		putchar('\n');
		l++;
	}
}
