#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _ra - reallocates memory for an array of pointers
 *	to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 * Return: pointer to the new list
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **addlist;
	size_t j;

	addlist = malloc(size * sizeof(listint_t *));
	if (addlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		addlist[j] = list[j];
	addlist[j] = new;
	free(list);
	return (addlist);
}

/**
 *free_listint_safe -  frees a listint_t list.
 *@head: double pointer of the head node
 *Return: num of nodes on the list
 */

size_t free_listint_safe(listint_t **head)
{
	size_t j, count = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (*head == NULL || head == NULL)
		return (count);
	while (*head != NULL)
	{
		for (j = 0; j < count; j++)
		{
			if (*head == list[j])
			{
				*head = NULL;
				free(list);
				return (count);
			}
		}
		count++;
		list = _ra(list, count, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (count);
}
