#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len- function that returns the number of elements in a linked list_t
 * @h: pointer to the list_t list
 * Return: number of elementss in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
