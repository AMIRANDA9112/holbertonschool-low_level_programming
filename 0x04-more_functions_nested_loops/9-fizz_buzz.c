#include "holberton.h"
#include <stdio.h>

/**
 * main - init function
 *
 * Return: 0 
 */

int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 != 0 && m % 5 != 0)
		{
			printf("%d", m);
		}
		else if (m % 3 == 0 && m % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz");
		}

		if (m < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
