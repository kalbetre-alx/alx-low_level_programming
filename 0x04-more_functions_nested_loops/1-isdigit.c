#include "main.h"

/**
 * _isdigit - checks for digit characters
 * @c: character to be checked
 *
 * Return: 1 if c is digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
