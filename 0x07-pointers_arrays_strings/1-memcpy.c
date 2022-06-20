/**
 * _memcpy - copies n bytes from src to dest
 * @dest: the pointer to the source string
 * @src: the pointer to the destination string
 * @n: the number of bytes to copy
 *
 * Return: returns a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
