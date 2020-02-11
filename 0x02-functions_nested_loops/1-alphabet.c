#include "holberton.h"
/**
 * print_alphabet - start of the program
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
{
	_putchar(i);
	i++;
}
	if (i > 'z')
{
	_putchar('\n');
}
}
