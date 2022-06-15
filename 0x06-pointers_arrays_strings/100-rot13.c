/**
 * rot13 - encodes a string using ROT13
 * @str: the string
 *
 * Return: returns a pointer to the modified string
 */

char *rot13(char *str)
{
	int i = 0, j, count = 52, is_lwr_caps = 0, is_upr_caps = 0;
	char *keys = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *encs = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		is_lwr_caps = *(str + i) >= 'a' && *(str + i) <= 'z';
		is_upr_caps = *(str + i) >= 'A' && *(str + i) <= 'Z';

		if (is_lwr_caps || is_upr_caps)
		{
			j = 0;
			while (j < count)
			{
				if (*(str + i) == *(keys + j))
				{
					*(str + i) = *(encs + j);
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (str);
}
