#include "main.h"

/**
 * main - prints the text _putchar
 *
 * Description: uses the _putchar function to print prints
 * the the text_putchar
 * Return: Always 0
 */

int main(void)
{
	char *msg = "_putchar\n";
	int i = 0;

	for (; i < 9; i++)
		_putchar(msg[i]);
	return (0);
}
