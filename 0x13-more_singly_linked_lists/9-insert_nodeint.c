#include "lists.h"
/**
 * insert_nodeint_at_index - insert node in a index especific
 * @head: listint_t of integers
 * @idx: the index to add the new node
 * @n: value to add
 * Return: the value, or null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *adr, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		adr = *head;

		for (i = 0; i < idx - 1 && adr != NULL; i++)
		{
			adr = adr->next;
		}

		if (adr == NULL)
			return NULL;
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = loc->next;
	loc->next = new;

	return (new);
}


