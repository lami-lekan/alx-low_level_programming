#include "main.h"

/**
*print_last_digit - returns num(-1)
*
*@num: number inputed
*
*Return: 0
*/

int print_last_digit(int num)
{
	int last_num = num % 10;

	if (last_num < 0)
		last_num *= -1;

	_putchar(last_num + '0');

	return (last_num);
}
