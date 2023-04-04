#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - function that adds a new node
 *		 at the end of a listint_t list
 *@head: head of double pointer
 *@n: new str to add at the end
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
