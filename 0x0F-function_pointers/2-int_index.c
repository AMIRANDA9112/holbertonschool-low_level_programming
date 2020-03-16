#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - compare elements of array with *cmp
 * @array: Integer array
 * @size: number of elements of the array
 * @cmp: function pointer to use
 * Return: index of the same element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array)
	{
		if (size)
		{
			if (cmp)
			{
				for (count = 0; count <= size ; count++)
				{
					if (cmp(array[count]))

					{
						return (count);
					}
				}
			}
		}
	}

	return (-1);
}

