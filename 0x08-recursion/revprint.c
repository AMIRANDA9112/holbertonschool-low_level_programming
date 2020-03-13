#include <stdio.h>

void _print_rev_recursion(char *s)

{
int i = 0;

if (*s)
	{
	_print_rev_recursion(s + 1);

	putchar(s[i]);
}

}
