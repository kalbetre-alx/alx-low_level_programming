#include "main.h"

/**
 * flip_bits - calculates the number of bits to flip to get one
 * number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: Number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, count = 0;

	diff = n ^ m;
	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
