/*
 * File: 6-print_line.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * print_line - prints a line with a given length
 * @n: holds the length of the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++);
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
