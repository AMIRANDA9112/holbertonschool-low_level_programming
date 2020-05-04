#include "lists.h"
/**
 * dlistint_len - count the number of nodes in double single list
 * @h : pointer of list to analize
 * Return:  size of list to print
**/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *lector;

	lector = h;
	while (lector)
	{
		i++;
		lector = lector->next;
	}
	return (i);
}