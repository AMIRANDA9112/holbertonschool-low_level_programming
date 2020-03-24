#include "lists.h"

/**
 * print_listint - prints int elements of a list
 * @h: pointer to the head of a list
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nn = 0;

	while (h)
	{
		if (!h)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%d\n", h->n);
		}
		h = h->next;
		nn++;
	}
	return (nn);
}
