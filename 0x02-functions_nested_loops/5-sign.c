#include "main.h"
#include <stdio.h>
/**
*print_sign - prints sign of a number
*
* @n: integer
* Return: -1, 0, or 1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		}
	else if (n == 0)
	{
		printf("0");
		}
	else
	{
		printf("-");
		}
	return (0);
	}
