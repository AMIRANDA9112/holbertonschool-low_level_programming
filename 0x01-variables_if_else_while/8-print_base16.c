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
	char ch;

	for (ch = 0 ; ch <= 9 ; ch++)
{
	putchar (ch + '0');
}
	for (ch = 'a' ; ch <= 'f' ; ch++)
{
	putchar (ch);
}
	putchar('\n');
	return (0);
}
