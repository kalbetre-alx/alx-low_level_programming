#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs and prints simple operations on integers
 * @argc: the number of arguments passed to main
 * @argv: the value of arguments passed to main
 *
 * Return: Nothing if successful or 98 for argument error,
 * 99 for operator error and 100 for division by zero
 */
int main(int argc, char **argv)
{
	int (*fun)(int, int);
	int a, b;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	fun = get_op_func(argv[2]);

	if (fun == NULL)
	{
		puts("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (((*argv[2] == '/') || (*argv[2] == '%')) && b == 0)
	{
		puts("Error");
		exit(100);
	}

	printf("%d\n", fun(a, b));
	return (0);
}
