#include "lists.h"

/**
 * dlistint_len - function that counts the number of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 * Return: num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
		h = h->next;
	return (num);
}
