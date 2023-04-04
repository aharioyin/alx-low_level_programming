#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - reallocates memory for an array of pointers
 *	to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **addlist;
	size_t j;

	addlist = malloc(size * sizeof(listint_t));

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
 *print_listint_safe - prints a listint_t linked list.
 *@head: head pointer
 *Return: Num of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t j, count = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (j = 0; j < count; j++)
		{
			if (head == list[j])
			{

				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (count);
			}
		}
		count++;
		list = _r(list, count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (count);
}
