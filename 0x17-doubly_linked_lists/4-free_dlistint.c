#include "lists.h"

/**
* free_dlistint - a function that frees a dlistint_t list.
* @head: head of list
*
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
