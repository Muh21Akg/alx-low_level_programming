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

	for (i = size; i >= 1; i--)
	{
		for (j = size; j >= 1; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
