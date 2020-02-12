#include "holberton.h"
/**
* times_table - start of the program
*
* Return: 0
*/
	void times_table(void)

{
int p = 0;
int p2;
int r;

	while (p <= 9)
	{
		for (p2 = 0; p2 <= 9; p2++)
		{
			p2 = 0;
			r = (p2 + p);


			if (p2 != 0 && r < 10)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else if (r < 10)
			{
				_putchar(r + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (p2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
		p++;
	}
}
