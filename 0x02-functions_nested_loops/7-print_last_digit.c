#include "holberton.h"
/**
* print_last_digit - start of the program
* @n: is a variable numeral
* Return: 0
*/
	int print_last_digit(int n)
{
	int  m;

	if (n < 0)
{
		m = ((n % 10) * -1);

	_putchar (m + '0');

	return (m);
}
	else
{
		m = (n % 10);

	_putchar (m + '0');
}
	return (m);
}
