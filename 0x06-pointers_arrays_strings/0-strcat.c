#include "holberton.h"
/**
 * *_strcat - main function
 * @dest: array
 * @src: array
 * Return: 1.
 */
char *_strcat(char *dest, char *src)

{
	int l;
	int i;

		for (i = 0; dest[i]; i++)

		{
		}

		for (l = 0; src[l] != '\0' ; l++)

		{
			dest[i + l] = src[l];
		}

	dest[l + i] = '\0';

	return (dest);
}
