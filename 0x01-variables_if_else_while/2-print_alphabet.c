#include <stdio.h>
#include <stdout>
/**
 * main - print the alphabet in lower case using putchar
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	putchar('\n');
	return (0);
}
