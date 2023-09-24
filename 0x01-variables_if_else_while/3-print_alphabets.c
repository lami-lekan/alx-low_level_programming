#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main -entry line
*
* Return: 0
*/
int main(void)
{
int a = 97;
int b = 65;
while (a < 123 && b < 91)
{
	putchar(a);
	a++;
	}
while (b < 91)
{
	putchar(b);
	b++;
	}
	putchar(10);
	return (0);
}
