#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the pointer to the string
 * @accept: the characters to search
 *
 * Return: returns a pointer to the byte in s that matches one of accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j, count = 0, is_found = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != 0)
		{
			if (*(accept + j) == *(s + i))
				is_found = 1;
			j++;
		}
		if (is_found)
			break;
		i++;
	}

	if (is_found)
		return (s + i);

	return NULL;
}
