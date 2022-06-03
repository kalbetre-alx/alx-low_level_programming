#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Description: uses putchar function to print Single digit numbers
 * Return: Always 0
 */

int main(void)
{
	int ch_code = 48;

	while (ch_code <= 57)
		putchar(ch_code++);
	putchar('\n');
	return (0);
}
