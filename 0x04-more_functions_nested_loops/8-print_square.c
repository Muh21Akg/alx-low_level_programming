/*
 * File: 8-print_square.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * print_square - prints a square with a given size
 * @size: holds the size of the square
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1); j++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
