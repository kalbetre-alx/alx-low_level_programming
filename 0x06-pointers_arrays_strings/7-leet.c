/**
 * leet - encodes a string by replacing letters with numbers
 * @str: the string
 *
 * Return: returns a pointer to the modified string
 */

char *leet(char *str)
{
	int i = 0, j, target_count = 10;
	char *targets = "aeotlAEOTL";
	char *replace = "4307143071";

	while (*(str + i) != '\0')
	{
		j = 0;
		while (j < target_count)
		{
			if (*(str + i) == *(targets + j))
				*(str + i) = *(replace + j);
			j++;
		}
		i++;
	}

	return (str);
}
