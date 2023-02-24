#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: void
 */

void more_numbers(void)
{
	int i;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (i = '0'; i <= '14'; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

