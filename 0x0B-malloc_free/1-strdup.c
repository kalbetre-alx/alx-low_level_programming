#include <stdlib.h>

/**
 * _strdup - duplicates a give string
 * @str: the given string
 *
 * Return: pointer to the duplicate string or NULL
 */
char *_strdup(char *str)
{
	unsigned int str_len = 0, i = 0;
	char *str_dup;

	if (str == NULL)
		return (NULL);

	while (str[str_len] != '\0')
		str_len++;

	str_dup = (char *)malloc(sizeof(char) * str_len);

	if (str_dup == NULL)
		return (NULL);

	while (i < str_len)
	{
		str_dup[i] = str[i];
		i++;
	}

	return (str_dup);
}
