#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checkes if the last digit of a random number
 * is 5, 0 or 6
 *
 * Description: generates a random number, determiens the last
 * digit and prints a message if it is >5, 0 or <6
 * Return: Always 0
 */

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	else if (d == 0)
		printf("Last digit of %d is %d and is 0\n", n, d);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	return (0);
}
