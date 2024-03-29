#include "main.h"
/**
* _pow_recursion - return power of int raised to int
* @x: base int
* @y: pow int
* Return: 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
