#include <stdio.h>

/**
 * main - prints digits from 0 to 9
 *
 * Return: 0 on success
 */

int main(void)
{
	int s1 = 0;
	int s2 = 0;

	for (s1 = 0; s1 <= 9; s1++)
{
	for (s2 = s1 + 1; s2 <= 9; s2++)
{
	putchar(s1 + 48);
	putchar(s2 + 48);
	if (s1 < 8)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
