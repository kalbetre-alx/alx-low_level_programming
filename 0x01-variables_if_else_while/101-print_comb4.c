#include <stdio.h>

/**
 * main - prints three digit numbers combo
 *
 * Description: uses putchar function to print three digit combo
 * Return: Always 0
 */

int main(void)
{
	int ch_code_1 = 48, ch_code_2, ch_code_3;

	while (ch_code_1 <= 57)
	{
		ch_code_2 = ch_code_1 + 1;
		while (ch_code_2 <= 57)
		{
			ch_code_3 = ch_code_2 + 1;
			while(ch_code_3 <= 57)
			{
				putchar(ch_code_1);
				putchar(ch_code_2);
				putchar(ch_code_3);
				ch_code_3++;
				if (ch_code_1 == 55 && ch_code_2 == 56 && ch_code_3 == 58)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			ch_code_2++;
		}

		ch_code_1++;
	}
	putchar('\n');
	return (0);
}
