/*
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Returns: 1 if s1 is greater, -1 if lessert or 0
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (*(s1 + index) != '\0' && *(s2 + index) != '\0')
	{
		if (*(s1 + index) != *(s2 + index))
			return (*(s1 + index) - *(s2 + index));
		index++;
	}

	if (*(s1 + index) != '\0' || *(s2 + index) != '\0')
		return (*(s1 + index) != '\0' ? *(s1 + index) : *(s2 + index) * -1);

	return (0);
}
