#include <stdio.h>

/**
 * main - prints lowercase alphabet letters in reverse
 *
 * Description: uses putchar function to print lowercase alphabets
 * in reverse order
 * Return: Always 0
 */

int main(void)
{
	int ch_code = 122;

	while (ch_code >= 97)
		putchar(ch_code--);
	putchar('\n');
	return (0);
}
