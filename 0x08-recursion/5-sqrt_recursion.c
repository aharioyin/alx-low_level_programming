#include "main.h"

/**
 * check_sqrt_recursion - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int check_sqrt_recursion(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check_sqrt_recursion(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checki_sqrt_recursion(1, n));
}
