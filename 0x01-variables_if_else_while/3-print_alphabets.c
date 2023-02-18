#include <stdio.h>
#include <stdlib.h>
#include <time.h

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
