#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase
 *
 * Description: uses putchar function to print base 16 numbers
 * Return: Always 0
 */

int main(void)
{
	int ch_code = 48;

	while (ch_code <= 102)
	{
		if (ch_code >= 58 && ch_code <= 96)
		{
			ch_code++;
			continue;
		}
		putchar(ch_code++);

	}
	putchar('\n');
	return (0);
}
