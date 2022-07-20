#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
 * pad_binary - pads a binary representation of a number with zero 
 * @bin: the bits in char
 * @size: total size to bits required
 *
 * Return: pointer to the padded bits string
 */
char *pad_binary(char *bin, unsigned long int size)
{
	char *str;
	unsigned long int len, i = 0, j = 0;

	len = strlen(bin);
	if (size <= len)
		return (bin);

	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);

	while (i < (size - len))
		str[i++] = '0';

	while (bin[j] != '\0')
		str[i++] = bin[j++];

	str[size] = '\0';
	free(bin);
	return (str);
}

/**
 * flip_bits - calculates the number of bits to flip to get one
 * number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: Nothing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char *bin_str_n = uint_to_binary(n);
	char *bin_str_m = uint_to_binary(m);
	unsigned long int count = 0, len_n, len_m, max_len;

	if (bin_str_n != NULL && bin_str_m != NULL)
	{
		len_n = strlen(bin_str_n);
		len_m = strlen(bin_str_m);
		max_len = len_n > len_m ? len_n : len_m;

		bin_str_n = pad_binary(bin_str_n, max_len);
		bin_str_m = pad_binary(bin_str_m, max_len);

		if (bin_str_n == NULL || bin_str_m == NULL)
			return (0);

		while (max_len > 0)
		{
			if (bin_str_n[max_len - 1] != bin_str_m[max_len - 1])
				count++;
			max_len--;
		}
	}

	free(bin_str_n);
	free(bin_str_m);

	return (count);
}
