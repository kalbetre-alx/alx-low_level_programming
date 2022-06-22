/**
 * skip_wild - skips to the next wild card
 * @s: the string
 *
 * Return: the next wild card
 */
char *skip_wild(char *s)
{
	if (*s == '\0' || *s != '*')
		return (s);
	else
		return (skip_wild(s + 1));
}

/**
 * mov_forward - moves a pointer to the next matching char
 * @s: the string
 * @match: the matching pointer
 * @c: the char
 *
 * Return: pointer to the char
 */
char *mov_forward(char *s, char *match, char *c)
{
	if (*s == *c)
	{
		match = s;
		return (mov_forward(s + 1, match, c));
	}
	else if (*s == '\0')
	{
		if (*match == *c)
			return (match);
		else
			return (s);
	}
	return (mov_forward(s + 1, match, c));
}

/**
 * wildcmp - compares strings with wild card
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if s1 and s2 are identical or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		s2 = skip_wild(s2);
		if (*s2 == '\0')
			return (1);

		s1 = mov_forward(s1, s1, s2);
		return (wildcmp(s1, s2));
	}

	if (*s1 != *s2)
	{
		if (*s2 == '*')
		{
			s2 = skip_wild(s2);
			s1 = mov_forward(s1, s1, s2);
			return (wildcmp(s1, s2));
		}
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
}
