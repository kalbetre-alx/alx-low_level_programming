#include "main.h"

/**
 * _strncpy - copies only n characters from src to dest
 * @dest: pointer to the dest string
 * @src: pointer to the src string
 * @n: number of chars to copy
 *
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int src_i = 0, dest_len = 0, stop_flag = 0;

	if (dest != NULL)
	{
		while (*(dest + dest_len) != '\0')
			dest_len++;
	}

	while (src_i < n)
	{
		if (*(src + src_i) == '\0')
			stop_flag = 1;

		if (!stop_flag)
			*(dest + src_i) = *(src + src_i);
		else
			*(dest + src_i) = '\0';

		src_i++;
	}

	if (src_i > dest_len)
		*(dest + src_i) = '\0';

	return (dest);
}
