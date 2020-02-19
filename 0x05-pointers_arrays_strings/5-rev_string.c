#include "holberton.h"
/**
 * rev_string - Entry point
 * @s: pointer
 * Description
 * Return: 0 - Always success
 */
void rev_string(char *s)

{

int k;
int i;
char j;

	for (i = 0; s[i] != '\0'; i++)

	{
	}
	i--;
	for (k = 0 ; k < i ; k++, i--)
	{
	j = s[i];
	s[i] = s[k];
	s[k] = j;
	}


}
