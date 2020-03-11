#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: the function pointer to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
 	size_t count;
	int pos;

	if ((array) && (size) && (action))

{
			for (count = 0; count < size ; count++)
				{
				pos = array [count];
				action(pos);
				}
		}
}
