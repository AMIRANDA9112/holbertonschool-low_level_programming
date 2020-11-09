#include "search_algos.h"

int recursive_binary(int low, int high, int value, int *list);
/**
 *binary_search - search for a value in a list
 *@array: array
 *@size: size of the array
 *@value: goal
 *Return: idx
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (recursive_binary(0, size - 1, value, array));
}


/**
 *recursive_binary - search by mid
 *@low: init point
 *@high: end point
 *@value: goal
 *@list: array list
 *Return: void
 */
int recursive_binary(int low, int high, int value, int *list)
{
	int pivot = low + (high - low) / 2;

	special_print(low, high, list);
	if (low == high && value != list[pivot])
		return (-1);
	else if (value > list[pivot])
	{
		pivot = recursive_binary(pivot + 1, high, value, list);
	}
	else if (value < list[pivot])
	{
		pivot = recursive_binary(low, pivot - 1, value, list);
	}
	return (pivot);
}


/**
 *special_print - prints finding try's
 *@low: init point
 *@high: end point
 *@array: array list
 *Return: void
 */
void special_print(int low, int high, int *array)
{
	int i = 0;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
