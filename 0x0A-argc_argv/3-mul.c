/**
 * main - print the product of two numbers
 * @argc: size of the argument vector
 * @argv: program name and arguments
 * Return: 1 if called with anything other than 2 arguments,
 * otherwise 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_puts("Error");
		return (1);
	}
	print_number(_atoi(argv[1]) * atoi(argv[2]));
	_putchar('\n');
	return (0);
}
