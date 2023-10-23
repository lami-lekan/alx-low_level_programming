#include "main.h"
/**
* _sqrt_recursion - gives sqrt of natural numbers
*
* @n: int to work on
* Return: int
*/
int _sqrt(int n, int test)
{
	if ((test * test) == n)
	{
		return (test);
	}
	else if ((test * test) < n)
	{
		return _sqrt(n, test+1);
	}
	else if ((test * test) > n)
		return (-1);
	return (0);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 2));
}


