#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of list
 * @head: double pointer to head
 * @n: int to be saved in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *transit = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (transit == NULL)
	{
		*head = new;
		return (*head);
	}

	while (transit->next != NULL)
		transit = transit->next;

	transit->next = new;

	return (*head);
}
