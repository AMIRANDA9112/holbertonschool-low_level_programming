#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: head of linked list
 */
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
	return 0;

	listint_t *temp;
	int tn;

	temp = *head;
	*head = temp->next;
	tn = temp->n;
	free(temp);

	temp = NULL;

	return (tn);
}

