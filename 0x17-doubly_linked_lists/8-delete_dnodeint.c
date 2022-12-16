#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index
* @head: head of list
* @index: index of node that should be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

