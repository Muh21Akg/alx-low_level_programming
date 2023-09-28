#include "main.h"

/**
 * _prime - iterates to find if its prime
 * @a: first argument
 * @b: second argument
 * Return: 1 if prime, 0 otherwise
 */
int _prime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if ((a % b) == 0)
	{
		return (0);
	}
	return (_prime(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, 2));
}
