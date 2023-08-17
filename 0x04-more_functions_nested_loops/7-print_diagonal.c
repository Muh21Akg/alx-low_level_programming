i/*
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
	int l, s;
	
	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
				_putchar(' ');

			_putchar('\\');

			if (l == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
