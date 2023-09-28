#include "main.h"

/**
 * _sqrt - iterates to find sqare toot
 * @a: first argunment
 * @b: second argument
 * Return: square root
 */
int _sqrt(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	else if ((b * b) > a)
	{
		return (-1);
	}
	return (_sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - calculates the square root of a given number
 * @n: number to be processed
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
