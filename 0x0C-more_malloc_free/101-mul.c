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
		if (*num < '0' || *num > '9')
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
	if (isValidNumber(str))
	{
		while (*str == '0')
			str++;
	}
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 * mul - multiplies two large numbers
 * @s1: first number
 * @s2: second number
 *
 * Return: s1 times s2
 */
char *mul(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = strlen(s1);
	l2 = strlen(s2);
	r = malloc(a = x = l1 + l2);

	if (!r)
		_puts("Error"), exit(98);

	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!isdigit(s1[l1]))
		{
			free(r);
			_puts("Error"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!isdigit(s2[l2]))
			{
				free(r);
				_puts("Error"), exit(98);
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;
			
			c /= 10;		
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
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
	char *r;
	int a, c, x;
	
	if (argc != 3)
		_puts("Error"), exit(98);

	x = strlen(argv[1]) + strlen(argv[2]);
	r = mul(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < x)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
