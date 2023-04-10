#include "main.h"

/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: pointer to the string of 0 and 1 chars
 *Return: the coverted number
 *	or 0 if there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int i;

	i = 0;
	if (!b)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != 0 && b[j] != 1)
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{

		i <<= 1;
		if (b[j] == 1)
			i += 1;
	}
	return (i);
}
