#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the joined string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str_comb;
	int i = 0, s1_len = 0, s2_len = 0;

	if (s1 != NULL)
	{
		while (s1[s1_len] != '\0')
			s1_len++;
	}

	if (s2 != NULL)
	{
		while (s2[s2_len] != '\0')
			s2_len++;
	}

	str_comb = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (str_comb == NULL)
		return (NULL);

	while (s1 != NULL && s1[i] != '\0')
	{
		str_comb[i] = s1[i];
		i++;
	}

	i = 0;
	while (s2 != NULL && s2[i] != '\0')
	{
		str_comb[i + s1_len] = s2[i];
		i++;
	}

	str_comb[s1_len + s2_len] = '\0';
	return (str_comb);
}
