#include <stdio.h>

/**
 * main - prints combination of two double digit numbers
 *
 * Description: uses putchar function to print combination of two double
 * digit numbers
 * Return: Always 0
 */

int main(void)
{
	int num_1 = 0, num_2, ch_1, ch_2, ch_3, ch_4;

	while (num_1 < 99)
	{
		num_2 = num_1 + 1;
		while (num_2 <= 99)
		{
			ch_1 = num_1 < 10 ? 48 : num_1 / 10 + 48;
			ch_2 = num_1 < 10 ? num_1 + 48 : num_1 % 10 + 48;
			ch_3 = num_2 < 10 ? 48 : num_2 / 10 + 48;
			ch_4 = num_2 < 10 ? num_2 + 48 : num_2 % 10 + 48;
			putchar(ch_1);
			putchar(ch_2);
			putchar(' ');
			putchar(ch_3);
			putchar(ch_4);

			if (num_1 != 98)
			{
				putchar(',');
				putchar(' ');
			}

			num_2++;
		}
		num_1++;
	}
	putchar('\n');
	return (0);
}
