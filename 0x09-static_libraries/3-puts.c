#include "holberton.h"
/**
 * _puts - Entry point
 * @str: pointer
 * Description
 * Return: 1 - Always success
 */
void _puts(char *str)
{
int i;
int j;

	for (i = 0; str[j] != '\0'; i++, j++)

	{
	_putchar(str[j]);
	}
	_putchar('\n');

}
