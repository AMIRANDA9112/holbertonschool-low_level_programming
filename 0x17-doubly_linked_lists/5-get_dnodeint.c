#include "lists.h"
/**
 * get_dnodeint_at_index - get the content of index
 * @head: pointer to first element
 * @index: position on list
 * Return: elemen of position index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *runner = head;

	while (runner)
	{
		if (i == index)
			return (runner);
		i++;
		runner = runner->next;
	}
	return (0);
}
