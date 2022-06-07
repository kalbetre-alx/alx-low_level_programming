#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 *
 * Description: uses the _putchar function to print
 * lower case alphabets ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
