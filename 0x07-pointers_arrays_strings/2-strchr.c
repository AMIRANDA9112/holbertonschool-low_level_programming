#include "holberton.h"
/**
 * *_strchr - main function
 * @s: string
 * @c: pointer
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; s++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}

	return (0);
}
