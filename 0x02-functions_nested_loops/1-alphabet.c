#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 *
 * Description: uses the _putchar function to print
 * lower case alphabets
 * Return: void
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
