#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: first number
 *
 * Description: prints natural numbers ranging from n to 98
 * Return: void
 */
void print_to_98(int n)
{
	int delta = n > 98 ? -1 : 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += delta;
	}
	printf("%d\n", 98);
}
