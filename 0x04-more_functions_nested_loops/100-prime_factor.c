/*
 * File: 100-prime_factor.c
 * Auth: Muhammad A Abdurrahman
 */

#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: o success
 */
int main(void)
{
	long x = 612852475143;
	int i;

	while (i++ < x / 2)
	{
		if (x % i == 0)
		{
			x /= 2;
			continue;
		}

		for (i = 3; i < x / 2; i += 2)
		{
			if (x % i == 0)
				x /= i;

		}
	}
	printf("%ld\n", x);
	return (0);
}
