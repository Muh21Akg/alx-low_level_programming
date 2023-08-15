/*
 * File: 9-times_table.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i, j;
	int x = i * j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('x');
			if (x != '9')
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
