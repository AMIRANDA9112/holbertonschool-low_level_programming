#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints an array
 * @array: Integer array
 * @size: number of elements of the array
 * @action: function pointer to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;
	int pos;

if (array)
	if (size)
		if (action)
		{
			for (count = 0; count < size ; count++)
				{
				pos = array[count];
				action(pos);
				}
		}
}
