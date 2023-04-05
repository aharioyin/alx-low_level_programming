#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - function that deletes the node at index
 *			of a listint_t linked list
 *@head: double pointer
 *@index: index of node
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *end_node, *next;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	end_node = *head;
	for (j = 0; j < index - 1; j++)
	{

		if (end_node->next == NULL)
			return (-1);
		end_node = end_node->next;
	}
	next = end_node->next;
	end_node->next = next->nex;
	free(next);
	return (1);
}
