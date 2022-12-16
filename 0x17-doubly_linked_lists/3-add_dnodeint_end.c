#include "lists.h"

/**
* add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
*
* @head: the head of list
* @n: the data of the element
*
* Return: address of the new element
* or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp;

	temp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = temp;
	new->next = NULL;

	return (new);
}
