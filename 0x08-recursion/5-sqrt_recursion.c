#include "main.h"

/**
 * _sqrt - searchs for sqrt by deduction algo
 * @n: the number
 * @i: odd number to be deducted
 *
 * Return: sqrt of a number if it has a natural root or -1
 */
int _sqrt(int n, int i)
{
	int root;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		root = _sqrt(n - i, i + 2);
		return (root < 0 ? -1 : 1 + root);
	}
}

/**
 * _sqrt_recursion - calculates sqrt of a number
 * @n: the number
 *
 * Return: sqrt of a number if it has a natural root or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
