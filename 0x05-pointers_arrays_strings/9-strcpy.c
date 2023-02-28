#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src,
 *	 including the terminating null byte (\0),
 *	 to the buffer pointed to by dest.
 *@dest: char to check
 *@src: char to check
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
