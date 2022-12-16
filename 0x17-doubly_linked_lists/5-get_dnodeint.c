#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: head of list
* @index: index of the node, starting from 0
*
* Return: NULL if the node doesnt exit
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!(head))
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
