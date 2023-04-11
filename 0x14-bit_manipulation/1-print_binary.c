#include "main.h"
#include <stdio.h>

/**
 *print_binary - function that prints the binary representation of a number
 *@n: number
 */

void print_binary(unsigned long int n)
{
	int result;
	unsigned long int i;

	for (i = n, result = 0; (i >>= 1) > 0; result++)
	;

	if (n == 0)
	{
		printf("0");
		return;
	};

	for (; result >= 0; result--)
	{
		if ((n >> result) & 1)
			printf("1");
		else
			printf("0");
	};
}
