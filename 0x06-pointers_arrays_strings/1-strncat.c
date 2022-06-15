#include "main.h"

/**
 * _strncat - copies n characters from src to dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of char to concatenate
 *
 * Return: pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_i = 0, src_i = 0;

	while (*(dest + dest_i) != '\0')
		dest_i++;

	while (src_i < n && *(src + src_i) != '\0')
	{
		*(dest + dest_i) = *(src + src_i);
		dest_i++;
		src_i++;
	}

	*(dest + dest_i) = '\0';

	return (dest);
}
