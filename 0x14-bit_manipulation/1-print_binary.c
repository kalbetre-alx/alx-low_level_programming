#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pow_2 - calculates the 2 the power of x
 * @x: power
 *
 * Return: 2 to the power of x
 */
unsigned int pow_2(int x)
{
	unsigned int num = 1;

	while (x--)
		num *= 2;

	return (num);
}


/**
 * uint_to_binary - converts a number to binary
 * @n: the unint number
 *
 * Return: a string containing th binary digits
 */
char *uint_to_binary(unsigned long int n)
{
	char *str;
	int len = 0, i = 0;
	unsigned int pow;

	if (n == 0 || n == 1)
	{
		str = malloc(sizeof(char) * 1 + 1);
		if (str == NULL)
			return (NULL);
		str[0] = n + '0';
		str[1] = '\0';
	}
	else
	{
		while (pow_2(len) <= n)
			len++;

		str = malloc(sizeof(char) * len);
		if (str == NULL)
			return (NULL);
		str[len--] = '\0';
		while (i <= len)
		{
			pow = pow_2(len - i);
			str[i++] = n >= pow ? '1' : '0';
			n = n >= pow ? n - pow : n;
		}
	}

	return (str);
}

/**
 * print_binary - prints the binary representation of number
 * @n: the number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	char *bin_str = uint_to_binary(n);

	if (bin_str != NULL)
	{
		while (*bin_str != '\0')
		{
			_putchar(*bin_str);
			bin_str++;
		}
	}
}
