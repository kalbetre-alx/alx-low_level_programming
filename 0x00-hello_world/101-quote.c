#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Description: prints the specified text to stderr
 * Return: Always 1
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(msg, sizeof(char), strlen(msg), stderr);
	return (1);
}
