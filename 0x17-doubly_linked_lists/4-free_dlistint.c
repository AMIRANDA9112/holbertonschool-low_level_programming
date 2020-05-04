#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: pointer to first element
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *runner;

	while (head)
	{
		runner = head;
		head = head->next;
		free(runner);
	}
}
