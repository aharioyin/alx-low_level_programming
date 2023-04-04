#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - function that deletes the head node of a listint_t linked list
 *@head: double pointer
 *Return: the head node’s data (n)
 *	or return 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	h = *head;
	*head = (*head)->next;
	n = h->n;
	free(h);
	return (n);
}
