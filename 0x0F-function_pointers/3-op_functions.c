#include "3-calc.h"

/**
 * op_add - adds two integer arguments
 * @a: first argument
 * @b: second argument
 *
 * Return: reault
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integer arguments
 * @a: first arg
 * @b: second arg
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integer arguments
 * @a: first arg
 * @b: second arg
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integer arguments
 * @a: first arg
 * @b: second arg
 *
 * Return: result
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - detedmines the modulus of two arguments
 * @a: first argument
 * @b: secpnd argument
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
