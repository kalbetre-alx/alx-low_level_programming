#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - returns uint equivalent of given bin
 * @b: pointer to a string of 0's and 1's
 *
 * Return: converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '1' || *b == '0')
		{
			num <<= 1;
			num += *b == '1' ? 1 : 0;
			b++;
		}
		else
			return (0);
	}

	return (num);
}
