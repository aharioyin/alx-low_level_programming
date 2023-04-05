#include "lists.h"

/**
 *find_listint_loop - function that finds the loop   *			in a linked list.
 *@head: pointer to the head node
 *Return: Address of the node, or NULL if there is n *		o loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *end;
	listint_t *start;

	end = start = head;
	while (end && start && start->next)
	{
		end = end->next;
		start = start->next->next;
		if (end == start)
		{
			end = head;
			break;
		}
	}
	if (!end || !start || !start->next)
		return (NULL);
	while (end != start)
	{

		end = end->next;
		start = start->next;
	}
	return (start);
}
