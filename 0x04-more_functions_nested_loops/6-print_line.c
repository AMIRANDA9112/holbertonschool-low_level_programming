#include "holberton.h"
/**
 * print_line - print line.
 *@n: vaible.
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n > 0)
	{
		int m;

		for (m = 1; m <= n; m++)

		{
			_putchar(95);

		}
			_putchar('\n');
	}

	else
		{
			_putchar('\n');
		}
}
