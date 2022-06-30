#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * isValidNumber - checks if a string is a valid number
 * @num: the given number
 *
 * Return: 1 if it is valid or 0
 */
int isValidNumber(char *num)
{
	while (*num)
	{
		if (!isdigit(*num))
			return (0);
		num++;
	}
	return (1);
}

/**
 * _puts - prints a string followed by a new line
 * @str: the string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	if (isValidNumber(str) && *str == '0')
		str++;

	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 * mul - multiplies two large numbers
 * @n1: first number
 * @n2: second number
 *
 * Return: n1 times n2
 */
char *mul(char *n1, char *n2)
{
	char *product;
	char d;
	int n1_len, n2_len, pr_len, carry, sum, j = 0;

	n1_len = strlen(n1);
	n2_len = strlen(n2);
	pr_len = n1_len + n2_len;
	product = malloc(pr_len + 1);
	if (product == NULL)
		return (NULL);
	while (j < pr_len)
	{
		*(product + j) = '0';
		j++;
	}
	n2_len--;
	n1_len--;
	while (n2_len >= 0)
	{
		carry = 0;
		j = n1_len;
		while (j >= 0)
		{
			d = product[j + n2_len + 1] - 48;
			sum = carry + d + (n1[j] - 48) * (n2[n2_len] - 48);
			carry = sum / 10;
			product[j + n2_len + 1] = sum % 10 + '0';
			j--;
		}
		product[n2_len] = carry + '0';
		n2_len--;
	}
	product[pr_len] = '\0';
	return (product);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: array of values passed to the the program
 *
 * Return: the multiplication of the numbers
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3 || !isValidNumber(argv[1]) || !isValidNumber(argv[2]))
	{
		_puts("Error");
		exit(98);
	}
	else
	{
		result = mul(argv[1], argv[2]);
		if (result == NULL)
		{
			_puts("Error");
			exit(98);
		}
		else 
		{
			_puts(result);
			free(result);
		}
	}
	return (0);
}
