#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints the opcodes of the main function
 * @main_fun: address of the main function
 * @n_bytes: number of bytes to print
 *
 * Return: Nothing
 */
void print_opcodes(char *main_fun, int n_bytes)
{
	int i = 0;

	while (i < n_bytes)
	{
		if (i != 0)
			printf(" ");
		printf("%.2hhx", main_fun[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to main
 * @argv: the value of arguments passed to main
 *
 * Return: Always O
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, n);
	return (0);
}
