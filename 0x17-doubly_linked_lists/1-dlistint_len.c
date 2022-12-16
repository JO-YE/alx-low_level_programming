#include "lists.h"

/**
* dlistint_len - returns the number of elements
* @h: head of list
*
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	if (!(h))
		return (number);

	while (h->next != NULL)
	{
		h = h->next;
	}

	while (h != NULL)
	{
		h = h->prev;
		number++;
	}

	return (number);
}
