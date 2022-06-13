#include <stdio.h>

/**
 * _strcpy - copies one string to another
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest string
 */

char *_strcpy(char *dest, char *src)
{
	int offset = 0;

	while (*(src + offset) != '\0')
	{
		*(dest + offset) = *(src + offset);
		offset++;
	}

	*(dest + offset) = '\0';

	return (dest);
}
