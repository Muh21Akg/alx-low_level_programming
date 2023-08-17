/*
 * File: 3-print_numbers.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * print_numbers - prints numbers (0 through 9) followed ba new line.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}
