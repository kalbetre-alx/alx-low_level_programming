#include <stdio.h>

/**
 * main - prints the arguments passed to the program
 * @argc: the number of arguments passed to main
 * @argv: the value of arguments passed to main
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
