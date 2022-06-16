#include "main.h"

/**
 * infinite_add - adds two large numbers
 * @n1: first number
 * @n2: second number
 * @r: resulting number
 * @size_r: size of r
 *
 * Return: result of the sum
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_size = 0, n2_size = 0, max, i = 0, j, right, left, sum, carry = 0;
	char temp;

	while (*(n1 + n1_size) != '\0')
		n1_size++;
	while (*(n2 + n2_size) != '\0')
		n2_size++;
	max = n1_size > n2_size ? n1_size : n2_size;
	if ((size_r - 1) < max)
		return (0);

	while (max-- > 0)
	{
		right = n1_size > 0 ? *(n1 + n1_size - 1) - 48 : 0;
		n1_size--;
		left = n2_size > 0 ? *(n2 + n2_size - 1) - 48 : 0;
		n2_size--;
		sum = (right + left + carry) % 10;
		carry = (right + left + carry) / 10;
		*(r + i++) = sum + '0';
	}
	if (carry > 0 && i + 1 < size_r)
		*(r + i++) = carry + '0';
	else
		return (0);

	*(r + i) = '\0';
	for (j = 0; j < i / 2; j++)
	{
		temp = *(r + j);
		*(r + j) = *(r + i - j - 1);
		*(r + i - j - 1) = temp;
	}
	return (r);
}
