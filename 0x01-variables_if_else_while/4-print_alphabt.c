#include <stdio.h>

/**
 * main - prints lowercase alphabet leters
 *
 * Description: uses putchar function to print lowercase alphabets
 * Return: Always 0
 */

int main(void)
{
	int ch_code = 97;

	while (ch_code <= 122)
	{
		if (ch_code == 101 || ch_code == 113)
		{
			ch_code++;
			continue;
		}
		putchar(ch_code++);

	}
	putchar('\n');
	return (0);
}
