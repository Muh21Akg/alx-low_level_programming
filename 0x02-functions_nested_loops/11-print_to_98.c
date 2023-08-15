/* 
 * File: 11-print_to_98.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * print_to_98 - prints numbers form entered number up until 98
 * @n: the starting point
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n);
			n--;
		}
		_putchar(n);
	}
	else
	{
		while (n < 98)
		{
			_putchar(n);
			n++;
		}
		_putchar(n);
	}
}
