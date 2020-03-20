#include "lists.h"
/**
 * add_node - add a new node at the beginning of list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *transit=  *head;

	int i = 0;

	while (str[i])
		i++;

	if (new == NULL)
		return(NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (transit == NULL)
		{
		*head = new;
		return(*head);
		}

	while(transit->next != NULL)
		transit = transit->next;

	transit->next = new;

	return(*head);
}
