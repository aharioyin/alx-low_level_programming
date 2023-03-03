#include "main.h"
/**
 *print_number - print an integer
 *@n: int
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else
	{
		n *= 1;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
