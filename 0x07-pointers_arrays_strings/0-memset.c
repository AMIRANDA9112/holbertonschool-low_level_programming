#include "holberton.h"
/**
 * _memset - main function.
 * @s: array
 * @b: constant
 * @n: variable
 * Return: value char
 */
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}
