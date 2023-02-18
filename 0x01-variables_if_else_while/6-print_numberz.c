#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * using putchar
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);

	purchar('\n');

	return (0);
}
