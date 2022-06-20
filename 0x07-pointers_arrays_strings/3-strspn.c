#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the pointer to the string
 * @accept: the characters to search
 *
 * Return: returns the number of matching bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, count = 0, is_prefix = 0;
	char ch;

	while (*(s + i) != '\0')
	{
		j = 0;
		is_prefix = 0;
		while (*(accept + j) != 0)
		{
			if (*(accept + j) == *(s + i))
				is_prefix = 1;
			j++;
		}
		if (!is_prefix)
			break;

		count++;
		i++;
	}

	return (count);
}
