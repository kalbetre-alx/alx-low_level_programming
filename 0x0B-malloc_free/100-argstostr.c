#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of a program
 * @ac: number of arguments
 * @av: argument values
 *
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int count = 0, str_len = 0, i = 0, j = 0;
	char *str_comb;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (count < ac)
	{
		i = 0;
		while (av[count][i] != '\0')
			i++;

		str_len += (i + 1);
		count++;
	}

	str_comb = (char *)malloc(sizeof(char) * (str_len + 1));

	while (j < str_len)
	{
		count = 0;
		while (count < ac)
		{
			i = 0;
			while (av[count][i] != '\0')
			{
				str_comb[j] = av[count][i];
				i++;
				j++;
			}
			str_comb[j] = '\n';
			j++;
			count++;
		}
	}

	str_comb[str_len] = '\0';
	return (str_comb);
}
