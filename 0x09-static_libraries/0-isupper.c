#include "main.h"
/**
 * _isupper - write a function that checks for uppercase character.
 * @c: char to check
 * Return: 1 if char is uppercse and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
