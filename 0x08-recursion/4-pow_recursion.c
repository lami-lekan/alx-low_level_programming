#include "main.h"
/**
* _pow_recursion - return power of int raised to int
* @x: base int
* @y: pow int
* Return: 0
*/
int _pow_recursion(int x, int y)
{
	int z = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		while (y > 0)
		{
			z *= x;
			y--;
			_pow_recursion(x, y);
		}
	return (z);
}
