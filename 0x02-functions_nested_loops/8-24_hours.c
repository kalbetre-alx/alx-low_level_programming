#include "main.h"

/**
 * jack_bauer - prints every minite of the day
 *
 * Description: prints the miniutes of the day from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int hr = 0, min, n1, n2, n3, n4;

	while (hr < 24)
	{
		n1 = hr < 10 ? 0 : hr / 10;
		n2 = hr % 10;
		hr++;

		min = 0;
		while (min < 60)
		{
			n3 = min < 10 ? 0 : min / 10;
			n4 = min % 10;
			min++;
			_putchar(n1 + '0');
			_putchar(n2 + '0');
			_putchar(':');
			_putchar(n3 + '0');
			_putchar(n4 + '0');
			_putchar('\n');
		}
	}
}
