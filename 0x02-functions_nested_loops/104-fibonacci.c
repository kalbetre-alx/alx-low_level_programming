#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Description: prints the first 98 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	long n1 = 1, n2 = 2, n3, counter = 3;

	printf("%lu, %lu", n1, n2);
	while (counter <= 98)
	{
		n3 = n1 + n2;
		printf(", %lu", n3);
		n1 = n2;
		n2 = n3;
		counter++;
	}
	putchar('\n');
	return (0);
}
