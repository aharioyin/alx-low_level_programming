#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 *@src: the source string
 *@dest: the destination string
 *Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *l = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (l);
}

