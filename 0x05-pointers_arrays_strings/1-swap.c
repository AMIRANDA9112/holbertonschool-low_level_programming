#include  "holberton.h"
/**
 * swap_int - change the n value to 98.
 * @a: pointer
 * @b: other pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)

{
int i;

	i = *a;
	*a = *b;
	*b = i;
}
