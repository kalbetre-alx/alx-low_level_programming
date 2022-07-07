#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums the arguments passed
 * @n: the count of the numbers
 *
 * Return: sum of the numbers passed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i, sum;

	va_start(ls, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ls, int);

	va_end(ls);
	return (sum);
}
