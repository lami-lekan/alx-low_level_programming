#include "main.h"
int is_prime(int n, int i);
/**
* is_prime_number - test if prime
*
* @n: int param
* Return: 0 or 1
*/

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		return (0);
	}
	return (is_prime(n, i));
}

/**
* is_prime - gives 0 or 1 if prime
* @n: int being tested
* @i: divisor/even number check
* Return: 1 or 0
*/

int is_prime(int n, int i)
{

	if (n != i && n % i == 0)
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	return (is_prime(n, i + 1));
	}
