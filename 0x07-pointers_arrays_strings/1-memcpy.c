#include "holberton.h"
/**
 * _memcpy - main function.
 * @dest: output
 * @src: input
 * @n: variable
 * Return: value char
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
