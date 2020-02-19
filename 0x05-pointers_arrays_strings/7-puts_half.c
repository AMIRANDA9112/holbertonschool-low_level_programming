#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - input
 * @str:  pointer
 * Return: O.
 */

void puts_half(char *str)
{
	int i = 0, j, l;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 1 == 0)
		l = i / 2;
	else
		l = (i - 1) / 2;

	for (j = i - l; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
