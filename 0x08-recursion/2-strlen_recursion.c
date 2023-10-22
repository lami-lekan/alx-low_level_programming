#include "main.h"
/**
* _strlen_recursion - returns len of str
* @s: string to count
* Return: 0
*/
int _strlen_recursion(char *s)
{
	int count;

	if (*s != '\0')
	{
		count = _strlen_recursion(s + 1);
		return (count + 1);
	}
	return (0);
}
