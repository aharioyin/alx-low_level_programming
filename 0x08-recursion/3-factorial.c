#include "main.h"

/**
 *factorial - factorial of a given number
 *@n: given number
 *Return: -1 if n is lower than 0
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		i = return n * factorial(n - 1);
	}
	return (i);
}
