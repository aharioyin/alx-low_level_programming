#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
