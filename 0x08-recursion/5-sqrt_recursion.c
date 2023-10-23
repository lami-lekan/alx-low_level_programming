#include "main.h"
/**
* _sqrt_1 - gives roots and return an int
*
* @test: a first test
* @n: int to work on
* @n: int
* Return: int
*/
int _sqrt_1(int n, int test)
{
	if ((test * test) == n)
	{
		return (test);
	}
	else if ((test * test) < n)
	{
		return (_sqrt_1(n, test + 1));
	}
	else if ((test * test) > n)
		return (-1);
	return (0);
}
/**
* _sqrt_recursion - gives sqrt of natural int
*
* @n: int
*Return: int
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (_sqrt_1(n, 2));
}


