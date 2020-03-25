#include "lists.h"

/**
 * free_listint2 - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (*head)
	{

	while (*head)
	{
		fr = (*head)->next;
		free(*head);
		*head = fr;
	}
	}
	else
	*head = NULL;
}

