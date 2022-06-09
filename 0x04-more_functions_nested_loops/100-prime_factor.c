#include <stdio.h>

/**
 * main - prints the prime factors of a number
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143, factor = 2;

	while (n >= factor * factor)
	{
		if (n % factor == 0)
			n = n / factor;
		else
			factor++;
	}
	printf("%lu\n", n);
	return (0);
}
