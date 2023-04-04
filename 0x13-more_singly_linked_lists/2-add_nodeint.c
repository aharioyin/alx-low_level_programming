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
	listint_t *new;


	ptr = malloc(sizeof(listint_t));
	if (ptr == 0)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
