#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integers
 * @array: pointer to first element
 * @size: size array
 * @value: goal
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array != NULL)
	{
	    i = 0;

		while (i < size)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)}
			i++;
				return (i);
		}
	}
	return (-1);
}
