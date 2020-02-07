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
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
{
	putchar (m);
}
	for (m = 'A' ; m <= 'Z' ; m++)
{
	putchar (m);
}
	putchar('\n');
	return (0);
}
