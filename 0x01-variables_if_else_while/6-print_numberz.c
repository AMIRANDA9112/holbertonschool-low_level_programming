#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: 0
 */
int main(void)
{
	int in;

	for (in = 0 ; in <= 9 ; in++)
{
	putchar(in + '0');
}
	putchar('\n');
	return (0);
}
