#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins for given cents
 * @argc: the number of arguments passed to main
 * @argv: the value of arguments passed to main
 *
 * Return: 1 if Error else 0
 */
int main(int argc, char **argv)
{
	int cents, count = 0, i;
	int coins[] = {25, 10, 5, 2 };

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			for (i = 0; i < 4; i++)
			{
				while (num >= coins[i])
				{
					num -= coins[i];
					count++;
				}
			}
			printf("%d\n", num + count);
		}
	}
	return (0);
}
