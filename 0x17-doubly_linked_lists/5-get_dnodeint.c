#include "lists.h"

/**
 * get_dnodeint_at_index - function that finds a specific node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to retrieve
 * Return: pointer to the indexed node, or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (num = 0; num < index; num++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
