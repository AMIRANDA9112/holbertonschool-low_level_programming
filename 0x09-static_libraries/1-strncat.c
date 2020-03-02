#include "holberton.h"
/**
 * _strncat - main function
 * @dest: array
 * @src: array
 * @n: delimited
 * Return: 1.
 */
char *_strncat(char *dest, char *src, int n)

{
	int l;
	int i;

		for (i = 0; dest[i]; i++)

		{
		}


		for (l = 0; l < n && src[l] != '\0'; l++)

		{
			dest[i + l] = src[l];
		}



	dest[i + l] = '\0';

	return (dest);
}
