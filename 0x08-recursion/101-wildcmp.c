#include "main.h"

/**
 * wildcmp - compares two strings
 *@s1: string
 *@s2: special string
 *Return: 1 if identical or 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*' && *(s2 + 1) && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2 || s2 + 1, s1));
}
