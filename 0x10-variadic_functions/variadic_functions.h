#ifndef CALC_H
#define CALC_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct Format - Struct op
 *
 * @c: The character
 * @f: The function associated
 */
typedef struct Format
{
	char *c;
	void (*f)(va_list);
} Frmt;

#endif
