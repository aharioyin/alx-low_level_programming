#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: string
 */

void puts_half(char *str)
{
	int i, a;

	i = 0;

	while (str[i] != '\0')
	i++;

	if (i + 1 % 2 != '0')
		a = (i - 1) / 2;
	else
		a = (i / 2);
	a++;

	for (i = a; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
