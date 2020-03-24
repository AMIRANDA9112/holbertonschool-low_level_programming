#include "lists.h"

/**
 * listint_len - return the number of nodes
 * @h: pointer to the head of a list
 *
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nn = 0;

	while (h)
	{
		if (!h)
		{
			return (0);
		}
		h = h->next;
		nn++;
	}
	return (nn);
}
