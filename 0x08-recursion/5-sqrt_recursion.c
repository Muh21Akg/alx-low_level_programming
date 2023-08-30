#include "main.h"

/**
 * squr - calculates root
 * @a: same as n
 * @b: iteration index
 * Return: square root
 */
int squr(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (squr(a, b + 1));
}
/**
 * _sqrt_recursion - calculates the root
 * @n: the number to be processed
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	return (squr(n, 1));
}
