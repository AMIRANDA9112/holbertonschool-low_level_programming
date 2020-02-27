#include "holberton.h"
/**
 * _sqrt_recursion - Function that return the sqrt of an Int..
 * @n: Int number
 * Return: integer number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_rec(1, n));
}
/**
 * sqrt_ - second function
 * @x: Int number
 * @y: int number
 * Return: int number
 */
int sqrt_(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (sqrt_(x + 1, y));
	}
}
