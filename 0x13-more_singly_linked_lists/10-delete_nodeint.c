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

