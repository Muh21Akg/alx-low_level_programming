/*
 * File: 9-times_table.c
 * Auth: Muhammad A Abdurrahman
 */
#include "main.h"

/**
 * times_table - prints 9 times table
 */
void print_times_table(int n)
{
	int mult, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
