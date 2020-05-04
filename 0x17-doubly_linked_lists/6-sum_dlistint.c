#include "lists.h"
/**
 * sum_dlistint - add elements of list
 * @head: pointer to first element
 * Return: result of add and 0 if is 0
**/
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		{
		return (0);
		}
	else
		{
		int add = 0;

		dlistint_t *runner = head;

		while (runner)
			{
			add += runner->n;
			runner = runner->next;
			}
		return (add);
		}
}
