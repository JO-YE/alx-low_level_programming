#include "lists.h"
/**
* insert_dnodeint_at_index -  inserts a new node at a given position
* @h: head of file
* @idx: index where new node should be added
* @n: integar
*
* Return: address of the new node
* NULL if it fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp;
	unsigned int i;

	temp = *h;

	new = malloc(sizeof(dlistint_t));

	if (!(new))
		return (NULL);

	new->n = n;

	for (i = 0; i < (idx - 1); i++)
/* reduced the position by 1 to get the right index */
	{
		if (temp->next != NULL)
		{
			temp = temp->next;
		}
	}

	new->next = temp->next;
	new->prev = temp;

	temp->next = new;
	temp->next->prev = new;

	return (new);
}
