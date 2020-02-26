#include "holberton.h"
/**
 * _strlen_recursion -  main function..
 * @s: pointer
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s)

	{
	return (_strlen_recursion(++s) + 1);

	}
	return (0);

}
