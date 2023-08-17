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

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			goto x;
		}
		_putchar(i);
	}
x: _putchar('\n');
}
