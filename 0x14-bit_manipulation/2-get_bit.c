#include "main.h"

/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: checking bits
 *@index: index, starting from 0 of the bit you want to get
 *Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int diff, i;

	if (index > (sizeof(unsigned long in t) * 8 - 1))
		return (-1);

	diff = 1 << index;
	i = n & diff;
	if (diff == i)
		return (1);

	return (0);
}
