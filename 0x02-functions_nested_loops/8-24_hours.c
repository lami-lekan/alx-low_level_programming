#include "main.h"
/**
*jack_bauer - working clock
*
*Return: int
*/
void jack_bauer(void)
{
	int k;
	int l;

	for (k = 0; k <= 23; k++)
	{
		for (l = 0; l <= 59; l++)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
		}
	}
}
