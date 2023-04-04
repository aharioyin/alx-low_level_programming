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
