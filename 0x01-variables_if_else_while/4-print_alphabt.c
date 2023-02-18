#include <stdio.h>

/**
 * main - prints alphabet in lowercase except letters e and q
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch, e, q;

	e = 'e';
	q = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != e && ch != q)
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
