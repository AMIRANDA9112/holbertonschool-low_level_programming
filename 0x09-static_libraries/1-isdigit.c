#include "holberton.h"
/**
 * _isdigit - check the digit.
 * @c: The character to check.
 * Return: digit 1.
 */

	int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
{
	return (1);
}

	else
{
	return (0);
}
}
