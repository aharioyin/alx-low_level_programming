#include "main.h"

/**
 * flip_bits- unction that returns the number of bits you
 *would need to flip to get from one number to another
 *@n: first number
 *@m: second number
 *Return: num of bits you need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int a;
	unsigned int b = 0;

	diff = n ^ m;
	res = 1;

	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (res == (diff & res))
			b++;
		res <<= 1;
	}

	return (b);
}
