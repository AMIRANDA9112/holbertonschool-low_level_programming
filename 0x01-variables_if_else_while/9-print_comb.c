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

	for (in = 48 ; in < 58 ; in++)
{
	putchar(in);
	if (in < 57)
{
	putchar(44);
	putchar(32);
}
}
	putchar('\n');
	return (0);
}
