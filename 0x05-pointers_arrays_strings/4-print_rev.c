#include "holberton.h"
/**
 * print_rev - Entry point
 * @s: pointer
 * Description
 * Return: 0 - Always success
 */
void print_rev(char *s)

{

int i;
int j;

	for (i = 0; s[j] != '\0'; i++, j++)

	{
	}

	while (i--)

	{

	_putchar(s[j - 1]);

	j--;

	}

	_putchar('\n');

}
