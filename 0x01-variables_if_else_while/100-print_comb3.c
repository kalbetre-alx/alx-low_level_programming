#include <stdio.h>

/**
 * main - prints double digit numbers combo
 *
 * Description: uses putchar function to print double digit combo
 * Return: Always 0
 */

int main(void)
{
	int ch_code_1 = 48, ch_code_2;

	while (ch_code_1 <= 57)
	{
		ch_code_2 = ch_code_1 + 1;
		while (ch_code_2 <= 57)
		{
			putchar(ch_code_1);
			putchar(ch_code_2);
			ch_code_2++;
			if (ch_code_1 == 56 && ch_code_2 == 58)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}

		ch_code_1++;
	}
	putchar('\n');
	return (0);
}
