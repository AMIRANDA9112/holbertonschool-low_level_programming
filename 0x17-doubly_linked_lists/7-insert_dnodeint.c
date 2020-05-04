#include "lists.h"
/**
 * get_dnodeint_at_index - get the content of index
 * @head: pointer to first element
 * @index: position on list
 * Return: elemen of position index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *runner = head;

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*runner = NULL)
	    {
	    runner = new;
	    return (new);
	    }
    else
        {
        while(runner)
            {
            runner = runner->next;
            i++
                if (i == index)
                    {
                    runner->prev = new->n;

                    }



            }


        }
	while (runner)
	{
		if (i == index)

		i++;
		runner = runner->next;
	}
	return (0);
}