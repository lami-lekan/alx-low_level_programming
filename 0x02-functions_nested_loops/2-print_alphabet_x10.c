#include "main.h"
/**
* print_alphabet_x10 - prints lowercase char 10x
*
* Return: null
*/
void print_alphabet_x10(void)
{
	int lowerCase;
	int line = 0;

	while (line < 10)
	{
		for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		{
			_putchar(lowerCase);
			}
		_putchar('\n');
		line++;
		}
}
