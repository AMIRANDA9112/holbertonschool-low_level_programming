#include "holberton.h"
/**
 * print_diagonal - print diagonal.
 *@n: vaible.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int y;
	int x;

	if (n > 0)
	{
		for (y = 0; x < (n - 1); y++)
		{
			for (x = 0; x < y; x++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
