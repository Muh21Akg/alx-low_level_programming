#include "main.h"

/**
 * factorial - calculates the factorial
 * @n: number to be processed
 * Return: the factorail of n
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
