#include "main.h"

/**
 * _strcat - concatenates src string to dest string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	int dest_i = 0, src_i = 0;

	while (*(dest + dest_i) != '\0')
		dest_i++;

	while (*(src + src_i) != '\0')
	{
		*(dest + dest_i) = *(src + src_i);
		dest_i++;
		src_i++;
	}

	*(dest + dest_i) = '\0';

	return (dest);
}
