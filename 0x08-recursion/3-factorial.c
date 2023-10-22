#include "main.h"
/**
* factorial - return fact! of int
* @n: int
* Return: 0
*/
int factorial(int n)
{
	int fact;

	if (n < 1)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n-1);
		return (fact);
	}	
}
