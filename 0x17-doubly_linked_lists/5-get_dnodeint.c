#include "lists.h"
/**
 * get_dnodeint_at_index - get the content of index
 * @head: pointer to first element
 * @index: position on list
 * Return: elemen of position index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int leng = index;
	unsigned int i = 0;
	unsigned int p = dlistint_len(head);
	dlistint_t *runner;

	if (leng > p)
		return (0);

	while (i < index)
	{
		head = head->next;
		i++;
	}
	runner = head;
	if (runner == NULL)
		return (NULL);
	else
		return (runner);
}
