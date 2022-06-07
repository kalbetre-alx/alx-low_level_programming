#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 *
 * Description: prints the sum of even fibonacci numbers
 * where the sequence is less than 4,000,000
 * Return: always 0
 */
int main(void)
{
	long n1 = 1, n2 = 2, n3, sum = 0;

	do {
		sum += n2 % 2 == 0 ? n2 : 0;
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	} while (n2 < 4000000);
	printf("%lu\n", sum);
	return (0);
}
