#include <stdio.h>

/**
 * main - prints the sum of natural numbers which are muliples of 3 or 5
 *
 * Description: prints the sum of muliples of 3 or 5 below 1024
 * Return: always 0
 */
int main(void)
{
	int sum = 0, num = 1;

	while (num < 1024)
	{
		sum += num % 3 == 0 || num % 5 == 0 ? num : 0;
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
