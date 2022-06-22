/**
 * _len - calculates length of a string
 * @s: the string
 *
 * Return: length of the string
 */
int _len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _len(s + 1));
}

/**
 * check_palindrome - checks if a string is palindrome
 * @l: the left index
 * @r: the right index
 * @s: the string
 *
 * Return: 1 if s is palindrome or 0
 */
int check_palindrome(int l, int r, char *s)
{
	if (l > r)
		return (1);
	else if (*(s + l) != *(s + r))
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, s));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string
 *
 * Return: 1 if s is palindrome or 0
 */
int is_palindrome(char *s)
{
	int n = _len(s);

	return (check_palindrome(0, n - 1, s));
}
