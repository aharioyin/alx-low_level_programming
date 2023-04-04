#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - function that frees a listint_t list.
 *@head: haed of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
