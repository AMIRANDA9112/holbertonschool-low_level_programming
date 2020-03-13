#include "variadic_functions.h"
/**
 * print_numbers - print all the arguments
 * @n: number of arguments
 * @separator: string into numbers to print
 * Description: add allt the numbers passed by arguments
 * Return: integer number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, m;
	char *s;
	m = n;

	if (separator == NULL)
	{
	separator = "";
	}

	va_start(ap ,n);

	for(i = 0; i < m; i++)
	{
	s = va_arg(ap, char *);

		if (s == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", s);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
