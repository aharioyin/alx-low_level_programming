#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: string to check
 *@accept: consist only of bytes in s
 *
 * Return: the number of bytes in the initial segment
 *         of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	 int y = 0, i, j;


	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					y++;
			}
		}
		else
			return (y);
	}
		return (y);

}
