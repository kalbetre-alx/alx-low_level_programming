#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the pointer to the string
 * @c: the character to search
 *
 * Return: returns a pointer first occurrence of c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	short is_found = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			is_found = 1;
			break;
		}
		i++;
	}

	if (is_found)
		return (s + i);
	else
		return (NULL);
}
