#include "lists.h"

/**
 * list_len - return number of elements
 * @h: pointer to the head of a list
 *
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	size_t tmp = 0;

	while (h != NULL)
	{
		h = h->next;
		tmp++;
	}
	return (tmp);
}
