#include "holberton.h"
/**
 * puts2 - intput
 * @str: pointer
 * Return: On success 1.
 * 
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
