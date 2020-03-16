#include "3-calc.h"
/**
 * op_add - add
 * @a: integer num1
 * @b: integer num2
 * Description: add two integers
 * Return: integer number
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - add
 * @a: integer num1
 * @b: integer num2
 * Description: less two integers
 * Return: integer number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - add
 * @a: integer num1
 * @b: integer num2
 * Description: mul two integers
 * Return: integer number
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - add
 * @a: integer num1
 * @b: integer num2
 * Description: div
 * Return: integer number
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - add
 * @a: integer num1
 * @b: integer num2
 * Description: mod
 * Return: integer number
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
