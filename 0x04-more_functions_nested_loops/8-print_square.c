#include "holberton.h"
/**
 * print_square - print square.
 *size: variable.
 * Return: Always 0.
 */
void print_square(int size)
{
	int m;
	int p;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
