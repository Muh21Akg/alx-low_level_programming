/*
 * File: 4-print_most_numbers.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * print_most_numbers - prints nubers except two and four.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if ((i == 50) || (i == 52))
		{
			goto x;
		}
		_putchar(i);
	}
x: _putchar('\n');
}
