#include "main.h"

/**
 * get_endianness - Get the endianness object
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;

	return (*(char *)&n == 1);
}
