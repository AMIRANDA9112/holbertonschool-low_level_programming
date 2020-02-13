#include "holberton.h"
/**
 * print_most_numbers -no prints 2 and 4 number..
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
{
	if (c != '4' && c != '2')

	_putchar (c);
}
	_putchar ('\n');
}
