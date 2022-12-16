#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (n)
* of a dlistint_t linked list.
* @head: head of list
*
* Return: sum of the data
* 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!(head))
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
