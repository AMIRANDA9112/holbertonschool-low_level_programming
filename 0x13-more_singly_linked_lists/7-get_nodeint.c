#include "lists.h"
/**
 * get_nodeint_at_index - get the value of a node
 * @head: listint_t of integers
 * @index: index of point node
 * Return: the value, or null if fail
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;

	while (head != NULL)
	{
		if (ind == index)
			return (head);
		ind++;
		head = head->next;
	}
	return (NULL);
}
