#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: a separator to be used
 * @n: the count of the strings passed
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	char *str;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		str = va_arg(ls, char *);
		str == NULL ? printf("(nil)") : printf("%s", str);
	}

	printf("\n");
	va_end(ls);
}
