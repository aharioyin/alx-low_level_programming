#include "main.h"
/**
 * rev_string - function that reverses a string.
 *@s: string
 */

void rev_string(char *s)
{
	int a, b, c;
	char d;

	a = 0;
	c = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	c = a - 1;

	for (b = 0; b < a / 2; b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c--] = d;
	}
{
