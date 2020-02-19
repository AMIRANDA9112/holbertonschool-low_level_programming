#include "holberton.h"
/**
 * puts_half - input
 * @str:  pointer
 *
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{
	int i = 0, j, k;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 1 == 0)
		l = i / 2;
	else
		k = (i - 1) / 2;

	for (j = i - k; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
