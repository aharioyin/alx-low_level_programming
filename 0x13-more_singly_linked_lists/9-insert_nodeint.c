#include "lists.h"

/**
 *insert_nodeint_at_index -function that inserts a new node
 *			 at a given position
 *@head: double pointer
 *@idx: index of the list
 *@n: new node data
 *Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *add;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		add = *head;
		for (i = 0; i < idx - 1 && add != NULL; i++;)
		{
			add = add->next;
		}
		if (add = NULL)
			return (NULL);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	temp->next = add->next;
	add->next = temp;
	return (temp);
}

