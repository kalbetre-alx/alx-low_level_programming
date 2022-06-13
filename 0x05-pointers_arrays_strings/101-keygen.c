#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - it all starts here
 *
 * Return: 0 always success
 */

int main(void)
{
	int SUM_OF_CHARS = 2772, diff, sum = 0, i = 0;
	char pswd[100];

	srand(time(NULL));
	while (sum != SUM_OF_CHARS)
	{
		diff = SUM_OF_CHARS - sum;
		if (diff < 48)
		{
			sum = -pswd[i--];
		}
		else
		{	
			pswd[i] = diff <= 126 ? diff : rand() % (126 - 48) + 48;
			sum += pswd[i++];
		}
	}
	pswd[i] = '\0';
	printf("%s", pswd);
	return (0);
}
