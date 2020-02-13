#include "holberton.h"
/**
 * more_numbers - imprints several.
 *
 * Return: noway.
 */
void more_numbers(void)
{
	int a;
	int c;

		for (a = 0; a <= 9 ; a++)
	{
			for (c = 0; c <= 14 ; c++)
		{

				if (c > 9)
			{ _putchar((c / 10) + '0');
			} _putchar((c % 10) + '0');
		}
			_putchar('\n');
	}
}
