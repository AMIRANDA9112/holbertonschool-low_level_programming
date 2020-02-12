#include "holberton.h"
/**
* jack_bauer - start of the program
*
* Return: 0
*/
void jack_bauer(void)

{
int n = 0;
int m = 0;

	while (n < 24)
	{
		while (m < 60)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
	m = 0;
	n++;

	}
}
