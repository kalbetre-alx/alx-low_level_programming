#include "main.h"
#include <stddef.h>
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
