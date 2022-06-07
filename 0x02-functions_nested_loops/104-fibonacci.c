#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Description: prints the first 98 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int counter = 3, overflow;
	unsigned long n1 = 1, n2 = 2, n3;
	long n1_head, n1_tail, n2_head, n2_tail, sum_head, sum_tail;

	printf("%lu, %lu", n1, n2);
	while (counter < 93)
	{
		n3 = n1 + n2;
		printf(", %lu", n3);
		n1 = n2;
		n2 = n3;
		counter++;
	}

	n1_head = n1 / 1000000000;
	n1_tail = n1 % 1000000000;
	n2_head = n2 / 1000000000;
	n2_tail = n2 % 1000000000;

	while (counter <= 98)
	{
		overflow = (n1_tail + n2_tail) / 1000000000;
		sum_tail = (n1_tail + n2_tail) - (1000000000 * overflow);
		sum_head = (n1_head + n2_head) + overflow;

		printf(", %lu%lu", sum_head, sum_tail);

		n1_head = n2_head;
		n1_tail = n2_tail;
		n2_head = sum_head;
		n2_tail = sum_tail;
		counter++;
	}

	putchar('\n');
	return (0);
}
