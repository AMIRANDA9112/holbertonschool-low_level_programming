#include "lists.h"
/**
 * free_list - fre list
 * @head: pointer to head
 * Return: Void
 */
void free_list(list_t *head)
{

	list_t *tmp = head;

	while (tmp)
	{
		list_t *fr = head;

		tmp = tmp->next;
		free(fr);

	}
}
