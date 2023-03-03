#include "main.h"
/**
 *print_number - print an integer
 *@n: int
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
		print_number(i / 10);
	
	_putchar((i % 10) + '0');
}
