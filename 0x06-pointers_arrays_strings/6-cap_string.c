/**
 * cap_string - capitalize every word of a string
 * @str: the string
 *
 * Return: returns a pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0, sep_count = 13, j = 0;
	int is_lwr_caps = 0, is_upr_caps = 0;
	char separator[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '\"', '(', ')', '{', '}'};

	while (*(str + i) != '\0')
	{
		is_lwr_caps = *(str + i) >= 'a' && *(str + i) <= 'z';
		is_upr_caps = *(str + i) >= 'A' && *(str + i) <= 'Z';

		if (i == 0 && is_lwr_caps)
		{
			*str -= 32;
		}
		else if (!(is_lwr_caps || is_upr_caps))
		{
			j = 0;
			while (j < sep_count)
			{
				if (*(str + i) == separator[j])
				{
					if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
						*(str + i + 1) -= 32;
					break;
				}
				j++;
			}
		}
		i++;
	}
}
