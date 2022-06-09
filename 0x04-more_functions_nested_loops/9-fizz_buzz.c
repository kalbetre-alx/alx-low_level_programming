#include <stdio.h>


/**
 * main - Fizz-Buzz Program
 *
 * Return: Always 0
 */

int main(void)
{
	int i, max = 100;

	for (i = 1; i <= max; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != max)
			printf(" ");
	}
	printf("\n");
	return (0);
}
