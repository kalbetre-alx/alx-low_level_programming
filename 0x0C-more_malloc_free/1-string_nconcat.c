#include <stdlib.h>

/**
 * _strlen - gets the string length
 * @str: the string
 *
 * Return: length of the string or 0 if NULL
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	if (str == NULL)
		return (0);

	while(*(str + len))
		len++;
	
	return (len);
}

/**
 * string_nconcat - combines two strings given the limit for the second
 * @s1: the first string
 * @s2: the second string
 * @n: the number of chars from s2 to copy
 *
 * Return: pointer to the concatenated string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i = 0;
	char *combo;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	n = n >= s2_len ? s2_len : n;

	combo = malloc(sizeof(char) * (s1_len + n + 1));
	if (combo == NULL)
		return (NULL);

	while (*(s1 + i) != '\0')
	{
		*(combo + i) = *(s1 + i);
		i++;
	}

	i = 0;
	while (i < n)
	{
		*(combo + s1_len + i) = *(s2 + i);
		i++;
	}

	*(combo + s1_len + n) = '\0';
	return (combo);
}
