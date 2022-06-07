#include "main.h"

/**
 * _islower - checks if a char is in lowercase
 * @c: charachter to be checked
 *
 * Description: checks if a char is lowercase by
 * using its ascii code
 * Return: 1 if c is lowercase otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
