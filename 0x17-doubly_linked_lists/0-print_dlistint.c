#include "lists.h"
/**
 * print_dlistint - print all elements to a double linked list
 * description - follow de flow of a list to print all positions.
 *@h : pointer of list to print
 * Return :  size of list to print
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *lector;

	lector = h;
	while (lector)
	{
		printf("%d\n", lector->n);
		i++;
		lector = lector->next;
	}
	return (i);
}
