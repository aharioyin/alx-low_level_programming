#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: pointer to the number
 *@index: index, starting from 0 of the bit you want to get
 *Return:the value of the bit at index index
 *	or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	j = 1 << index;
	*n |= j;

	return (1);
}
