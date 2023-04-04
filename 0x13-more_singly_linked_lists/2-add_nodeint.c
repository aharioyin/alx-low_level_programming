#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - function that adds a new node
 *		 at the beginning of a listint_t list
 *@head: head of double pointer
 *@n: new node to add
 *Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	if (head == NULL)
		return (NULL);

	add = malloc(sizeof(listint_t));
	if (add == 0)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
