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
	unsigned int i = 0, j, needle_found = 1;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *needle)
		{
			j = 0;
			needle_found = 1;
			while (*(needle + j) != 0)
			{
				if (*(needle + j) != *(haystack + i + j))
				{
					needle_found = 0;
					break;
				}
				j++;
			}

			if (needle_found)
				break;
		}
		i++;
	}

	if (needle_found)
		return (haystack + i);

	return (NULL);
}
