#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints lowercase alpha
*
* Return: 0
*/

void print_alphabet(void)
{
	int lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		_putchar(lowerCase);
	}
_putchar('\n');
}
