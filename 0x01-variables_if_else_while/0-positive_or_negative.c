#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checkes if a random number is +ve -ve or 0
 *
 * Description: generates a random number
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
