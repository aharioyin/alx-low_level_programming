#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *@s: string
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = (1 + strlen_recursion(s + 1));
	}
	return (i);
}
