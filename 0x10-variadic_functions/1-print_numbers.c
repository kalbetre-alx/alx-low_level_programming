#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: a separator to be used
 * @n: the count of numbers passed
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ls, int));
	}
	
	printf("\n");
	va_end(ls);
}
