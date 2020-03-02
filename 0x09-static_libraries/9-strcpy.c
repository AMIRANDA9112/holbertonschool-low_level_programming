#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - main function
 * @dest: array
 * @src: array
 * Return: 1.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;


	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (src);
}
