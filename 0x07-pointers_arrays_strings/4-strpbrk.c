#include "holberton.h"

/**
 * *_strpbrk - main function
 * @s: string base
 * @accept: string to compare
 *
 * Return:  char
 */
char *_strpbrk(char *s, char *accept)

{
	int j;
	int i;

	for (i = 0; s[i] != '\0' ; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}

	s = 0;

	return (s);
}
