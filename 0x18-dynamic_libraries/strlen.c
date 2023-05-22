#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *@s: char to check
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
