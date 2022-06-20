/**
 * _memset - fills the first n bytes of s with b
 * @s: the pointer to a string
 * @b: the character to fill
 * @n: the number of times to fill b
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
