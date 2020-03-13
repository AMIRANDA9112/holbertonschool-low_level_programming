#include "variadic_functions.h"
/**
 * print_numbers - print all the arguments
 * @n: number of arguments
 * @separator: string into numbers to print
 * Description: add allt the numbers passed by arguments
 * Return: integer number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);

		for (i = 0; i < n; i++)

		{
			if (i == (n - 1))

				{
				printf("%d",va_arg(ap,int));
				}
			else
				{
				printf("%d%s", va_arg(ap,int), separator);
				}
		}

	va_end(ap);

	putchar('\n');
}
