#include <stdio.h>

/**
 * _atoi - convert string to number
 * @s: string
 *
 * Return: converted number
 */

int _atoi(char *s)
{
	int offset = 0, tens = 10;
	unsigned int number = 0;
	short sign = 1, is_number_set = 0, is_sign_valid = 1;

	while (*(s + offset) != '\0')
	{
		if (is_sign_valid && (*(s + offset) == '-' || *(s + offset) == '+'))
		{
			while (*(s + offset) == '-' || *(s + offset) == '+')
			{
				sign = *(s + offset) == '-' ? sign * -1 : sign;
				offset++;
			}
		}
		if (*(s + offset) >= 48 && *(s + offset) <= 57)
		{
			number = number * tens + (*(s + offset) - 48);
			is_number_set = 1;
		}
		else if (is_number_set)
		{
			if (*(s + offset) != ' ')
				is_sign_valid = 0;
			break;
		}
		offset++;
	}

	sign = is_sign_valid ? sign : 1;
	number = number * sign;

	return (number);
}
