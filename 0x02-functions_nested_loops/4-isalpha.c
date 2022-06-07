#include "main.h"

/**
 * _isalpha - checks if a char is in alphabetic char
 * @c: charachter to be checked
 *
 * Description: checks if a char is a letter, lowercase or uppercase
 * using its ascii code
 * Return: 1 if c is a letter, lowercase or uppercase otherwise returns 0
 */
int _isalpha(int c)
{
	short is_lower, is_upper;

	is_upper = c >= 65 && c <= 90;
	is_lower = c >= 97 && c <= 122;
	if (is_upper || is_lower)
		return (1);
	return (0);
}
