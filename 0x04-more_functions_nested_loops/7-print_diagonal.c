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
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_puchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
