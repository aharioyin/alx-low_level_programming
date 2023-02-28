#include "main.h"
/**
 * rev_string - function that reverses a string.
 *@s: string
 */

void rev_string(char *s)
{
	int a, r;

	a = 0;

	while (s[a] != '\0')
		a++;

	for (r = a - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
}
