#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints the stated texts before main is called
 * this is possible b.c of the above attribute call
 *
 * Return: void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
