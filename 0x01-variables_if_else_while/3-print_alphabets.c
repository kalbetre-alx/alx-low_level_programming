#include <stdio.h>

/**
 * main - prints uppercase and lowercase alphabet leters
 *
 * Description: uses putchar function to print both upper and
 * lowercase alphabets
 * Return: Always 0
 */

int main(void)
{
	int ch_code = 97;

	while (ch_code <= 122)
		putchar(ch_code++);
	ch_code = 65;
	while (ch_code <= 90)
		putchar(ch_code++);
	putchar('\n');
	return (0);
}
