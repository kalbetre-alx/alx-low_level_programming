#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
 * binary_to_uint - returns uint equivalent of given bin
 * @b: pointer to a string of 0's and 1's
 *
 * Return: converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0, pow = 0;

	if (b == NULL)
		return (0);

	len = strlen(b) - 1;
	while (len >= 0)
	{
		if (b[len] == '1' || b[len] == '0')
		{
			num += ((int)(b[len]) - 48) * (int)pow_2(pow);
			len--;
			pow++;
		}
		else
			return (0);
	}

	return (num);
}

/**
 * set_bit - sets the value of a bit at a given index
 * @n: the number
 * @index: the zero based index
 *
 * Return: 1 if it succeeded or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char *temp, *bin_str;
	unsigned int len, i, j;

	bin_str = uint_to_binary(*n);
	if (bin_str == NULL)
		return (-1);

	len = strlen(bin_str);
	if (index > (len - 1))
	{
		temp = malloc(sizeof(char) * (index + 2));
		if (temp == NULL)
			return (-1);

		temp[index + 1] = '\0';
		temp[0] = '1';

		for (i = 1; i < (index + 1) - len; i++)
			temp[i] = '0';

		for (j = 0; j < len; j++)
			temp[i++] = bin_str[j];

		*n = binary_to_uint(temp);
		free(temp);
	}
	else
	{
		bin_str[len - index - 1] = '1';
		*n = binary_to_uint(bin_str);
	}

	free(bin_str);
	return (1);
}
