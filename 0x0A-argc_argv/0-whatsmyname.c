#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: the number of arguments passed to main
 * @argv: the value of arguments passed to main
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
