#include "holberton.h"
/**
 * _isupper - check the uppercase.
 * @c: The character to check.
 * Return: UPPERCASE 1.
 */

	int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}

	else
{
	return (0);
}
}
