#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the pointer to the string
 * @needle: the pointer to the search string
 *
 * Return: returns a pointer to the begining of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(needle + j) != '\0' && *(haystack + i + j) == *(needle + j))
			j++;

		if (*(needle + j) == '\0')
			return (haystack + i);
		i++;
	}

	return (NULL);
}
