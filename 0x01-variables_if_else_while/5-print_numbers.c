#include <stdio.h>

/**
 * main - prints single digits
 *
 * Description: uses printf function to print single digit numbers
 * Return: Always 0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
		printf("%d", num++);
	printf("\n");
	return (0);
}
