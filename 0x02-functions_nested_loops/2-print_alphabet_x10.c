#include "holberton.h"
/**
 * print_alphabet_x10 - start of the program
 *
 * Return: 0
 */

void print_alphabet_x10(void)

{
	char i = 'a';
	int j = 1;

	while (j <= 10)
{
	while (i <= 'z')
{
		_putchar(i);
	i++;
}
	if (i > 'z')
{
		_putchar('\n');
}
	j++;
	i = 'a';
}
}
