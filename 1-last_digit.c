#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point: prints if n is negative or positive
 * Return: Always 0 on success
 */
int main(void)
{
	int n;
	char *b;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
{
		a = (n % 10);
		b = "and is greater than 5";
		printf("Last digit of %d is %d %s\n", n, a, b);
}
	else if (n == 0)
{
		a = (n % 10);
		b = "is zero";
		printf("Last digit of %d is %d  %s\n", n, a, b);
}
	else if (n < 6 && n > 0)
{
		a = (n % 10);
		b = "and is less than 6 and not 0";
		printf("Last digit of %d is %d %s\n", n, a, b);
}

	return (0);
}
