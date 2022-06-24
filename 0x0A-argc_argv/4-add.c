#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * isValidNumber - checks if a string is a valid number
 * @num: the given number
 *
 * Return: 1 if it is valid or 0
 */
int isValidNumber(char *num)
{
	while (*num != '\0')
	{
		if (!isdigit(*num))
			return (0);
		num++;
	}
	return (1);
}

/**
 * main - adds numbers passed to it
 * @argc: the number of arguments passed to main
 * @argv: the value of arguments passed to main
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int sum = 0, j = 1;

	if (argc > 1)
	{
		while (j < argc)
		{
			if (!isValidNumber(argv[j]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[j]);
			j++;
		}
	}

	printf("%d\n", sum);
	return (0);
}
