#include "lists.h"
/**
 * add_dnodeint - add a node at front in a double linked lists
 * @head : pointer to first element of list
 * @n : node to add
 * Return:  adrress of the new element
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));

if (new == NULL)
	return (NULL);
else

	{

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

		if (*head == NULL)
			{
			*head = new;
			return (new);
			}
		else
			{
			(*head)->prev = new;
			new->next = *head;
			*head = new;
			}
	return (new);
	}
}
