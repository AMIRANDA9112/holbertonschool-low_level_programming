#include "lists.h"
/**
 * sum_listint - add  the values of a nodes
 * @head: firt node of lintint
 * Return: sum, or 0 if empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
