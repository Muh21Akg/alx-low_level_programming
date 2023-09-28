#include "main.h"

/**
 * factorial - calculates the factorial of an unt
 * @n: number to be processed
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
