#include "holberton.h"
/**
 * main - print the number of arguments received
 * @argc: size of the argument vector
 * @argv: program name and arguments
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	print_number(argc - 1);
	_putchar('\n');
	return (0);
}
