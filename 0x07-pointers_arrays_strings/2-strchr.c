#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - character in a string
 * @s: string
 * @c: pointer to the source of dat to be copied
 *
 * Return: s ( char o NULL)
 */
char *_strchr(char *s, char c)
{
	for (s = 0; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
		return (s);
	s = '\0';

	return (s);
}
