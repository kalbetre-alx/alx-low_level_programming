#include "main.h"

/**
 * _abs - computes the absolute vlaue of a number
 * @n: number to be computed
 *
 * Description: if a number is negative it returns a pos equivalent
 * Return: absolute value of the give number
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);

	return (n);
}
