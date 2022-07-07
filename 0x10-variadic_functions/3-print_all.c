#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @ls: va_list
 *
 * Return: Nothing
 */
void print_char(va_list ls)
{
	printf("%c", va_arg(ls, int));
}

/**
 * print_int - prints a int
 * @ls: va_list
 *
 * Return: Nothing
 */
void print_int(va_list ls)
{
	printf("%d", va_arg(ls, int));
}

/**
 * print_float - prints a float
 * @ls: va_list
 *
 * Return: Nothing
 */
void print_float(va_list ls)
{
	printf("%f", va_arg(ls, double));
}

/**
 * print_str - prints a string
 * @ls: va_list
 *
 * Return: Nothing
 */
void print_str(va_list ls)
{
	char *str = va_arg(ls, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything according to a format
 * @format: a format string
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ls;
	unsigned int i = 0, j;
	char *sep = "";
	Frmt formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(ls, format);

	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (formats[j].c != NULL)
		{
			if (*(formats[j].c) == format[i])
			{
				printf("%s", sep);
				formats[j].f(ls);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ls);
}
