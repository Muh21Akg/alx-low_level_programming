/*
 * File: 7-print_diagonal.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * print_diagonal - prints a diagonal line with a given length
 * @n: holds the length of the line
 */
void print_diagonal(int n)
{
	int i;

	if (i > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_puchar(' ');
			}
			_putchar('\\');
			if (i == (n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
